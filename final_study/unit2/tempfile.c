#include <stdio.h>


int main()
{
    char *buf;
    char name[100];
    buf = tmpnam(name);
    printf("buf: %s, name: %s", buf, name);
    fflush(stdout);
    sleep(20);
    return 0;
}
