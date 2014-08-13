// GetMyOrganizations.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "curl/curl.h"
#include <cstddef> 
#include "diadoc_api.h"
#include "Events/DiadocMessage.PostApi.pb.h"
#include "Events/DiadocMessage.GetApi.pb.h"
#include "Documents/DocumentList.pb.h"
#include "Organization.pb.h"

#pragma comment(lib,"curllib.lib")
#pragma comment(lib,"libprotobuf.lib")
#pragma comment(lib,"libprotobuf-lite.lib")
#pragma comment(lib,"libprotoc.lib")

using namespace std;
using namespace diadoc_api_functions;
using namespace Diadoc::Api::Proto::Events;
using namespace Diadoc::Api::Proto;
using namespace Diadoc::Api::Proto::Documents;


int _tmain()
{
	//логин/пароль
	/*char diadoc_login[] = "yu_ran.91@mail.ru";
	char diadoc_passwd[] = "ff";*/
	char diadoc_login[] = "kuzmin@comtec.ru";
	char diadoc_passwd[] = "Comtec1";
	//токен авторизации
	string token = diadoc_api_functions::authorization(diadoc_login, diadoc_passwd);
	
	//преобразование токена типа string в токен типа char 
	const char * auth_token = token.c_str();
	char *auth_header = get_auth_header(auth_token);
	
	string strOrganizations = get_MyOrganizations(auth_header);
	OrganizationList organizations;
	organizations.ParseFromString(strOrganizations);
	organizations.PrintDebugString();

	getchar();
	return 0;
}
