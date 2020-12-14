#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <setjmp.h>
#include <errno.h>


#define PIPE_BUF 100
#define FIFO_FILE "./testfifo"
#define INFILE "./in.txt"
#define OUTFILE "./out.txt"

#define MODE S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH

void err_exit(char *a){
    printf("%s", a);
    exit(0);
}
