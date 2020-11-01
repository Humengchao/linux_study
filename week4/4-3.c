#include "ch02.h"

int main(){
	int fd1,fd2;
	char buf[6];
	memset(buf,0,6);
	fd1=open("aaa",O_RDONLY);
	fd2=open("aaa", O_RDONLY);
	printf("fd1=%d,fd2=%d", fd1,fd2);
	lseek(fd1,4,SEEK_SET);
	read(fd2,buf, 5);
	printf("fd2 is %s\n", buf);
	return 0;
}
