#include "ch02.h"

int main() {
	FILE *fp;
	fp = fopen("./test.txt", "r");
	printf("fp = %d\n", fp->_fileno);
	return 0;
}
