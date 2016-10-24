
#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<unistd.h>
#include<string.h>
#define SER_PORT 8013
int main()
{int a;
int clisock,x,b,c;
char str[25],host[25];
char str2[25];
struct sockaddr_in cliaddr;
cliaddr.sin_port=htons(SER_PORT);
cliaddr.sin_family=AF_INET;
cliaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
clisock=socket(AF_INET,SOCK_STREAM,0);
x=connect(clisock,(struct sockaddr*)&cliaddr,sizeof(cliaddr));
printf("enter domain name");
scanf("%s",host);
write(clisock,host,sizeof(host));
read(clisock,str2,sizeof(str2));
printf("11%s\n",str2);
close(clisock);
return 0;
}
