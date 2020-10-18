#include "ch02.h"

int main(){
	int fd = open("./test.txt", O_RDONLY);
	//close(fd);
	
	FILE *fp = fdopen(1, "w");
	fprintf(fp, "bbb");
	fclose(fp);
	close(fd);

	return 0;
}
