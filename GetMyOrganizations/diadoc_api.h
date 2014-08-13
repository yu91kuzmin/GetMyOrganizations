#ifndef diadoc__api_h
#define diadoc__api_h

using namespace std;
 
namespace diadoc_api_functions {
	//�����������, ������� ��������� �����/������
	string authorization(char *diadoc_login, char *diadoc_passwd);
	string get_MyOrganizations(char *auth_header);
	//��������� HTTPS ������
	string execute_curl(CURL *curl, struct curl_slist *headerlist);
	//�������� ����� �� �������
	static int writer(char *data, size_t size, size_t nmemb, string *buffer);
	//������������ ����� str1 = str2 + str3
	void strconcat(char *str1, char *str2, char *str3);
	//����������� ����� str1 = str2
	void strcopy(char *str1, char *str2);
	//����������� char = const char
	void const_char_to_char(char *str1, const char *str2);
	//������������ https ��������� �����������
	char *get_auth_header(const char *auth_token);
	
}
#endif