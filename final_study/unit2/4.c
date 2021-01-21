#include <stdio.h>

int main()
{
    FILE* fd = fopen("a.txt", "r");
    int c = getc(fd);
    printf("%c", c);
    ungetc(c, fd);
    printf("%c", getc(fd));

    return 0;
}
