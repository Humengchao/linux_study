#include "ch06.h"

int main()
{
    pid_t pid;
    int p;
    pid = fork();

    if (pid == 0) {
        printf("i am child...\n");
        printf("child : pid = %d, ppid = %d\n", getpid(), getppid());
        sleep(5);
        printf("after sleep\n");

    } else {
        printf("i am parent ... \n");
        printf("parent : pid = %d\n", getpid());
        p = wait(NULL);
        printf("child process end, and its' pid is %d\n", p);
    }

    return 0;
}
