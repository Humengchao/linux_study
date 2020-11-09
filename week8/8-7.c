#include "ch02.h"

int main(){
    pid_t ret;
    ret = fork();
    if (ret == 0){
        printf("Child : ret = %d\n", ret);
        printf("Child : pid = %d, ppid = %d\n", getpid(), getppid());
        exit(0);
    } else if (ret < 0) {
        perror("fork failed!\n");
        exit(-1);
    } else {
        sleep(3);
        printf("Parent : ret = %d\n", ret);
        printf("Parent : pid = %d, ppid = %d\n", getpid(), getppid());
        return 0;
    }
}
