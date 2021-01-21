#include "ch03.h"

int main()
{
    int newfd = dup(1);
    char buf[20] = "hello, world";
    write(newfd, buf, 20);
    close(newfd);
    return 0;
}
