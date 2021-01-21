#include <stdio.h>
#define BUF_SIZE 8

int main()
{
    FILE* fd;
    struct iobuf{
        char buf[BUF_SIZE];
        char other[BUF_SIZE];
    } buffer;
    memset(&buffer, '\0', sizeof(struct iobuf));
    //gets(buffer.buf);
    fgets(buffer.buf, sizeof(buffer.buf), stdin);
    fprintf(stdout, "buf:%s", buffer.buf);
    fprintf(stdout, "other:%s", buffer.other);

    return 0;
}
