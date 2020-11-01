#include "my.h"

extern int input();
extern void output();

int main() {
	while(1){
		printf("输入(i)还是查询(o)还是退出(e)？");
		char c;
		c = getchar();
		if(c == 'i')
			input();
		else if (c == 'o')
			output();
		else if (c == 'e')
			exit(1);
		else;
	}

	return 0;
}
