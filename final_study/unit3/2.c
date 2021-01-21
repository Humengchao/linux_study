#include "ch03.h"

int main(){
    int fd = open("a.txt", O_RDWR);
    char buf[200];
    char hello[20] = "Hello, world";
    //read(fd, buf, 20);
    //write(fd, hello, 20);
    read(fd, buf, 20);
    fprintf(stderr, buf);

    return 0;
}
