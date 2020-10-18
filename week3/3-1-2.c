#include <stdio.h>

int main(){
	FILE *fp = fopen("./test.txt", "a+");
	fclose(fp);
	return 0;
}
