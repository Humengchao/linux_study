#include "ch02.h"

// 父进程派生出三个子进程，第二个子进程又派生出两个进程
// wait(NULL)用来等待子进程结束
int main() {
    int r1, r2, r3, r4, r5;
    r1 = fork();
    if(r1 == 0) {
        printf("child 1 : pid = %d, ppid = %d\n",getpid(), getppid());
        exit(0);
    }
    if(r1 > 0) {
        r2 = fork();
        if (r2 == 0) {
            printf("child 2 : pid = %d, ppid = %d\n",getpid(), getppid());
            r4 = fork();
            if (r4 == 0){
                printf("child 4 : pid = %d, ppid = %d\n", getpid(), getppid());
            }
            if (r4 > 0){
                r5 = fork();
                if (r5 == 0){
                    printf("child 5 : pid = %d, ppid = %d\n", getpid(), getppid());
                }
                wait(NULL);
                wait(NULL);
            }
            exit(0);
        }
        if (r2 > 0) {
            r3 = fork();
            if (r3 == 0) {
                printf("child 3 : pid = %d, ppid = %d\n", getpid(), getppid());
                exit(0);
            }
            wait(NULL);


        }
        wait(NULL);
        wait(NULL);
        printf("parent : pid = %d, r1 = %d, r2 = %d\n", getpid(), r1, r2);
        return 0;
    }
}
