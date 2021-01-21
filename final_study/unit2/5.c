#include <stdio.h>

int main()
{
    char buf[20];
    FILE* fd = fopen("a.txt", "r+");
    fread(buf, 5, 4, fd);
    fprintf(stdout, "%s", buf);

    return 0;
}
