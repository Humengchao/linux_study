#include <stdio.h>

int main()
{
    FILE* f = fopen("a.txt", "r+");
    int c = fgetc(f);
    if (f != NULL)
        printf("fgetc : %c",c);
    else
        printf("open error");
    f = freopen("a.txt", "r", f);
    printf("fgetc : %c",fgetc(f));
    return 0;
}
