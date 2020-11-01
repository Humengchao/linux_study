// 由于gets()不要求提供字符串s的空间大小，这导致gets()成为了危险的函数：它没有为字符串s的溢出提供保护！当要读入的行长度超过字符串s所能容纳的大小时，超出的部分将越过s提供的空间而覆盖其他的数据或程序。
//
//


#include <stdio.h>

int main() {
	char buf1[10];
	char buf2[80];
    printf("请输入一个大于10bety的字符串\n");
	gets(buf1);
	printf("buf1 is %s\n", buf1);
	printf("buf2 is %s\n", buf2);
	return 0;
}
