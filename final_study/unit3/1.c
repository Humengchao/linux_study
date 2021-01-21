#include "ch03.h"

int main()
{
    int fd = open("a.txt", O_RDWR);
    putc(fd, stdout);
    printf("%d", fd);

    return 0;
}
