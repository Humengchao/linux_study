#include <stdio.h>

int y_or_n_ques(char *argv) {
	printf("%s", argv);
	int i;
	i = getc(stdin) - '1' + 1;
}
