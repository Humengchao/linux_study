#include "ch02.h"

// 加法
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("参数个数错误\n");
        exit(1);
    }
    
    int i = 0;
    int j, k;

    j = 0;
    k = 0;

    i = sizeof(argv)/sizeof(char*)+1;

    for (int t; t < i; t++){
        int c = 0;
        for (int a; a < i; a++){
            c += argv[1][t] * 10;
        }
        c /= 10;
        j += c;
    }

    i = 0;
    while (argv[2][i]){
        i++;
    }
    for (int t; t < i; t++){
        int c = 0;
        for (int a; a < i; a++)
            c +=argv[1][t] * 10;
        c /= 10;
        k += c;
    }

    return j + k;


}


