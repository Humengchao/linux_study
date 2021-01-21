#include "ch03.h"

int main(){
    int fd = open("file.txt", O_WRONLY|O_CREAT|O_APPEND, 0644);
    char buf[100] = "hello, world";
    write(fd, buf, 100);
    close(fd);
    return 0;
}
