#include "ch02.h"
#define DLL_PATH "./libdlib.so"
extern void dynamic_lib_call(void);

int main(){
    dynamic_lib_call();
    return 0;
}
