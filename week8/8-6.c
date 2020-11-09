#include "ch02.h"

int main(){
    pid_t p1, f1;
    p1 = getpid();
    f1 = getppid();
    printf("Current process pid = %d, ppid = %d\n", p1, f1);
    sleep(20);
    return 0;
}
