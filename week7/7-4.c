#include "ch02.h"

static void __attribute__ ((constructor)) Before_Main(){ // 构造函数
    printf("-------------Before Main-------------\n");
}

static void __attribute__ ((destructor)) After_Main(){
    printf("----------After Main-----------\n");
}
void callback1(){
    printf("---------Call Back1-----------\n");
}

void callback2(){
    printf("-----------Call Back2-----------\n");
}

void callback3(){
    printf("-----------Call Back3-----------\n");
}

int main(){
    atexit(callback1);   // 退出时注册函数
    atexit(callback2);
    atexit(callback3);
    printf("---------------Program finished------------\n");
    return 0;
}
