#include "ch06.h"

int main()
{
    pid_t pid;
    char *str = "I am parent";
    printf("before fork----------------\n");
    pid = fork();
    
    if (pid == 0) {
        // 子进程
        printf("I am child, pid = %d, ppid = %d", getpid(), getppid());
        sleep(25);
    } else {
        // 父进程
        printf("%s, pid = %d, ppid = %d",str, getpid(), getppid());
        sleep(25);
    }
    printf("after fork----------\n");
    return 0;
}
