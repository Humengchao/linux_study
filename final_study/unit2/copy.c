#include <stdio.h>

int main(int argc, char* argv[])
{
    char buf[200];
    FILE *from, *to;
    from = fopen(argv[1], "r");
    to = fopen(argv[2], "w");

    int n;
    while((n = fread(buf, sizeof(char), 200, from)) > 0)
        fwrite(buf, sizeof(char), n, to);
    return 0;    
}
