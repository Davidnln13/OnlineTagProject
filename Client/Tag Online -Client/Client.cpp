//client
#pragma comment(lib,"ws2_32.lib")
#include <WinSock2.h>
#include <iostream>

int main()
{
	//Winsock startup 
	WSADATA wsaData;
	WORD DllVersion = MAKEWORD(2, 1);
	//if this returns a value other than zero there is an error
	if (WSAStartup(DllVersion, &wsaData) != 0)
	{
		MessageBoxA(NULL, "Winsock startup failed", "Error", MB_OK | MB_ICONERROR);
		exit(1);
	}



	return 0;
}