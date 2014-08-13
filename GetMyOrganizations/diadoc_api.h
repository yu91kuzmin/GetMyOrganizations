#ifndef diadoc__api_h
#define diadoc__api_h

using namespace std;
 
namespace diadoc_api_functions {
	//авторизация, функция принимает логин/пароль
	string authorization(char *diadoc_login, char *diadoc_passwd);
	string get_MyOrganizations(char *auth_header);
	//выполнить HTTPS запрос
	string execute_curl(CURL *curl, struct curl_slist *headerlist);
	//получить ответ от сервера
	static int writer(char *data, size_t size, size_t nmemb, string *buffer);
	//конкатенация строк str1 = str2 + str3
	void strconcat(char *str1, char *str2, char *str3);
	//копирование строк str1 = str2
	void strcopy(char *str1, char *str2);
	//копирование char = const char
	void const_char_to_char(char *str1, const char *str2);
	//формирование https заголовка авторизации
	char *get_auth_header(const char *auth_token);
	
}
#endif