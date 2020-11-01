#include "ch02.h"

int main() {

	int fd;
	char buf[]="abc";
	fd=open("hole", O_CREAT|O_RDWR, 0666);
	write(fd, buf, 1);
	lseek(fd, 10, SEEK_SET);
	write(fd, buf, 1);
	close(fd);
	return 0;
}
