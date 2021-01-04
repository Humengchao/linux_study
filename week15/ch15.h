#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#define SERVPORT 3333   // 服务器监听端口号
#define BACKLOG 10      // 最大同事连接请求数
#define MAXDATASIZE 100

