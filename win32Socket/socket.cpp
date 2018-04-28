#include <stdio.h>
#include <string.h>
#include <winsock2.h>
//#pragma comment(lib,"ws2_32")
#pragma comment(lib, "ws2_32")
#include <iostream>
using namespace std;
#define bfsize 1024
int main(){
	WSADATA data;	
	WSAStartup(MAKEWORD(2,2),&data);
	SOCKADDR_IN ser_addr;
	ser_addr.sin_port = htons(8421);
	ser_addr.sin_family = AF_INET;
	ser_addr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
 	
	SOCKET serversocket = socket(AF_INET,SOCK_STREAM,0);
           
	int len = sizeof(SOCKADDR);
	bind(serversocket,(SOCKADDR*)&ser_addr,len);
	printf("begin bind\n")	;
	listen(serversocket,10);
        sockaddr_in cli_addr;
	SOCKET clientsocket ;
	char buffer[bfsize];
	clientsocket = accept(serversocket,(SOCKADDR*)&cli_addr,&len);
	printf("accept\n")	;
	char sendstr[bfsize]= "hellowrold";
//	send(clientsocket,sendstr,strlen(sendstr)+1,0);
	printf("send")	;
	while(true){

	recv(clientsocket,buffer,bfsize,0);
	printf("%s",buffer);	

	}

	return 0;

}
