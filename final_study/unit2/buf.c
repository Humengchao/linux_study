#include <stdio.h>

int main()
{
    
    fputs("hello", stdout);
    fflush(stdout);
    sleep(10);

    return 0;
}
