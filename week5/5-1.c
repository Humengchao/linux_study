#include <stdio.h>

int main() {
	char buf[5];
	//setbuf(stdout, buf);
	//setvbuf(stdout, buf, _IONBF, 1);
	printf("hello!");
	//for (int i = 0; i < 1019; i++) {
	//	printf(" ");
	//}
	//fflush(stdout);
	fclose(stdout);
	while(1);
	return 0;
}
