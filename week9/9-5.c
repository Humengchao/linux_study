#include "ch02.h"


int main() {
    pid_t pid1, pid2, pid11, pid12, pid21, pid22;
    
    FILE *fp;
    fp = fopen("./out.txt", "wb");

    pid1 = fork();
    pid2 = fork();
    
    wait(NULL);
    wait(NULL);

    if (pid1 == 0) {
        // child
        pid11 = fork();
        pid12 = fork();
        
        wait(NULL);
        wait(NULL);

        if (pid11 == 0) {
            // child-child
            fprintf(fp, "pid11: %d\n", getpid());

        } else {
            // child-parent
            fprintf(fp, "pid1: %d\n", getpid());
        }

        if (pid12 == 0) {
            fprintf(fp, "pid12: %d\n", getpid());
        } else {
        }    
    } else {
        // parent
    fprintf(fp, "pid-father: %d\n", getpid());
    }

    if (pid2 == 0) {
        // child
        pid21 = fork();
        pid22 = fork();
        
        wait(NULL);
        wait(NULL);

        if (pid21 == 0) {
            fprintf(fp, "pid21: %d\n", getpid());
        } else {
            fprintf(fp, "pid2: %d\n", getpid());
        }

        if (pid22 == 0) {
            fprintf(fp, "pid22: %d\n", getpid());
        } else {
            
        }
    } else {
        // parent

    }
    return 0;
}
