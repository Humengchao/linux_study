#include <stdio.h>

int main()
{
    int result = putc('a', stdout);
    printf("result:%d\n", result);
    int c = getc(stdin);
    printf("\n%c", c);
    return 0;
}
