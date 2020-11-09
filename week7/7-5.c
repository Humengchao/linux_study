#include "ch02.h"

int main(){
    printf("%s\n", getenv("PATH"));
    extern char **environ;  // 系统环境变量指针
    for(int i = 0; environ[i] != NULL; i++){
        printf("env[%d} : %s\n", i, environ[i]);
    }
    return 0;
}

