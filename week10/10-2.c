#include "ch02.h"

int main() {
    char *argv[] = {"./test", "hello", "world", "2020", NULL};
    int i;
    printf("10-2 : pid = %d, ppid = %d\n", getpid(), getppid());
    i = execle("/home/william/桌面/linux_study/week10/test", "hello", "world", "2020",(char *)0, NULL);
    if (i == -1) {
        perror("execve failed\n");
        exit(1);
    }
    printf("after calling!\n");
    return 0;
}
