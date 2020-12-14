#include "ch02.h"

#define TEN_MEG 1024*1024*10
int main()
{
    int fifo_fd, i, n, total_bytes = 0;
    char sendbuf[PIPE_BUF];
    // 打开FIFO文件
    if ((fifo_fd = open(FIFO_FILE, O_WRONLY)) < 0)
    {
        printf("Could not open fifo %s\n", FIFO_FILE);
        exit(EXIT_FAILURE);
    }
    printf("Process %d opened: %s\n", getpid(), FIFO_FILE);
    printf("ppid = %d\n", getppid());
    do {
        if ((n = write(fifo_fd, sendbuf, PIPE_BUF)) == -1)
            err_exit("FIFO broken");
        printf(" %d write %d bytes\n", getpid(), n);
        total_bytes += n;
    } while (total_bytes < TEN_MEG);
    close(fifo_fd);
    printf("Process %d finished\n", getpid());
    printf("ppid = %d \n", getppid());
    return 0;
}
