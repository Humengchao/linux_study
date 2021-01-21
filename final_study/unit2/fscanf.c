#include <stdio.h>

int main()
{
    char s[5] = "asdf";
    char buf[200];
    FILE *fd = fopen("a.txt", "r+");
    fscanf(fd, "%s", s);
    printf("%s", s);
    fread(buf, 20, 3, fd);
    fwrite(buf, 20, 3, stdout);
    fclose(fd);
    return 0;
}
