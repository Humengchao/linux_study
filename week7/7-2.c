#include "ch02.h"

int main(int argc, char *argv[], char *env[]){
    // 第三个参数env为环境变量
    
    int i;
    for (i = 0; i < argc; i++){
        printf("argv[%d] : %s\n", i, argv[i]);
    }
    for (i = 0; env[i]; i++){
        printf("env[%d] : %s\n", i, env[i]);
    }

    return 0;
}
