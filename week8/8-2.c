#include "ch02.h"

int main(){
    int i=1;
    int *p;
    do{
        free(p);
        p = (int*)malloc(i*1024);
        i++;
    }while(p != 0);
    printf("%d\n",i);

    return 0;
        

}
