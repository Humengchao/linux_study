#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main (){
	int fd, i;
	char buf[100];
	fd = open("./test.data1", O_WRONLY|O_CREAT);
	for (i=0; i<100; i++)
		buf[i] = i;
	printf("process %d:before writing i = %d\nfile description=%d", getpid(), i, fd);
	i = write(fd, buf, sizeof(buf));
	printf("after i = %d", i);
	sleep(5000);
	return 0;
}
