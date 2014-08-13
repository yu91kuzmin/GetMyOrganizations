#include "stdafx.h"
#include <iostream> 
#include <string>
#include <stdio.h>
#include "curl/curl.h"
#include <cstddef> 
#include "diadoc_api.h"

#pragma comment(lib,"curllib.lib")

using namespace std;

static char errorBuffer[CURL_ERROR_SIZE];
static string buffer;


namespace diadoc_api_functions {
	string authorization(char *diadoc_login, char *diadoc_passwd)
	{
		CURL *curl;
		struct curl_slist *headerlist=NULL;
		struct curl_httppost *formpost=NULL;
		struct curl_httppost *lastptr=NULL;
		char auth_url_part1[] = "https://diadoc-api.kontur.ru/Authenticate?login=";
		char *auth_url_part2 = new char[strlen(diadoc_login) + strlen(auth_url_part1) + 1];
		char auth_url_part3[] = "&password=";
		char *auth_url_part4 = new char[strlen(auth_url_part3) + strlen(diadoc_passwd) + 1];
		char *auth_url = new char[strlen(auth_url_part2) + strlen(auth_url_part4) + 1];
		strconcat(auth_url_part2, auth_url_part1, diadoc_login);
		strconcat(auth_url_part4, auth_url_part3, diadoc_passwd);
		strconcat(auth_url, auth_url_part2, auth_url_part4);
		delete[] auth_url_part2;
		delete[] auth_url_part4;
		curl = curl_easy_init();
		if(curl)
			{   
				headerlist = curl_slist_append(headerlist, "POST https://diadoc-api.kontur.ru/Authenticate HTTP/1.1");
				headerlist = curl_slist_append(headerlist, "Authorization: DiadocAuth ddauth_api_client_id=comtec-e628f938-1133-449a-96d4-a105a0181e9a");
				curl_easy_setopt(curl, CURLOPT_POST, true);
				curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "");
				curl_easy_setopt(curl, CURLOPT_URL, auth_url);
				string execute = execute_curl(curl, headerlist);
				delete[] auth_url;
				return execute;
			}
		curl_easy_cleanup(curl);
	}
	string get_MyOrganizations(char *auth_header)
	{
		CURL *curl;
		struct curl_slist *headerlist=NULL;
		struct curl_httppost *formpost=NULL;
		struct curl_httppost *lastptr=NULL;
		curl = curl_easy_init();
		if(curl)
			{ 
				headerlist = curl_slist_append(headerlist, "POST https://diadoc-api.kontur.ru/Authenticate HTTP/1.1");
				headerlist = curl_slist_append(headerlist, auth_header);
				curl_easy_setopt(curl, CURLOPT_URL, "https://diadoc-api.kontur.ru/GetMyOrganizations?outputFormat=protobuf");
				string result = execute_curl(curl, headerlist);
				return result;
			}
		curl_easy_cleanup(curl);
	}
	string execute_curl(CURL *curl, struct curl_slist *headerlist)
	{
		string request;
		CURLcode res;
		headerlist = curl_slist_append(headerlist, "Connection: Keep-Alive");
		headerlist = curl_slist_append(headerlist, "Host: diadoc-api.kontur.ru");
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
		curl_easy_setopt(curl, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_1_1);
		//вывести подробный ответ 
		curl_easy_setopt(curl, CURLOPT_VERBOSE, true);
		curl_easy_setopt(curl, CURLOPT_HEADER, true);
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
		res = curl_easy_perform(curl);
		if (res == CURLE_OK) {      
			int k, n;
			for (int i = 0; i < int(buffer.length()); i++) 
			{
				if (buffer[i] == '\n' && buffer[i+2] == '\n') 
				{
					k = i+3;
					n = k-1;
				}
			}
			for (k; k < int(buffer.length()); k++) 
			{
				request += buffer[k];
			}
		}
		else  
		{
			request = errorBuffer; 
		}
		return request;
	}
	static int writer(char *data, size_t size, size_t nmemb, string *buffer)
	{
	  int result = 0;
	  if (buffer != NULL)
	  {
		buffer->append(data, size * nmemb);
		result = size * nmemb;
	  }
	  return result;
	}

	void strcopy(char *str1, char *str2)
	{
		int str2_len = strlen(str2); 
		for(int i = 0; i < str2_len; i++)
		{
			str1[i] = str2[i];
		}
		str1[str2_len] = '\0';
	}
	void const_char_to_char(char *str1, const char *str2)
	{
		int str2_len = strlen(str2); 
		for(int i = 0; i < str2_len; i++)
		{
			str1[i] = str2[i];
		}
		str1[str2_len] = '\0';
	}
	void strconcat(char *str1, char *str2, char *str3)
	{
		int str2_len = strlen(str2);
		int str3_len = strlen(str3);
		for(int i = 0; i < str2_len; i ++)
		{
			str1[i] = str2[i];
		}
		for(int k = 0; k < str3_len; k++)
		{
			str1[str2_len + k] = str3[k];
		}
		str1[str2_len + str3_len] = '\0';
	}

	char *get_auth_header(const char *auth_token)
	{
		char head[] = "Authorization: DiadocAuth ddauth_api_client_id=comtec-e628f938-1133-449a-96d4-a105a0181e9a, ddauth_token=";
		char *tmp_token = new char[strlen(auth_token) + 1];
		char *auth_header = new char[strlen(head) + strlen(auth_token) + 1];
		const_char_to_char(tmp_token, auth_token);
		strconcat(auth_header, head, tmp_token);
		delete[] tmp_token;
		return auth_header;
	}
}