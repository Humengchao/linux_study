#include "ch02.h"

int main() {
    printf("10-1 : pid = %d, ppid = %d\n", getpid(), getppid());
    system("./test hello world 2020 11 23");
    printf("after calling\n");
    return 0;
}
