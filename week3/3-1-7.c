#include "ch02.h"

int main(){
	FILE *fp;
	char buf[80];
	printf("open and create test_file.\n");
	if ((fp = fopen("test_file", "w")) == NULL){
		perror("fopen failed!\n");
		exit(1);
	}
	printf("writing string to test_file.\n");
	fputs("")
