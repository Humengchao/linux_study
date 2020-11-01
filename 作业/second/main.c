#include "my.h"

extern void input(FILE *fp);
extern void save(node *t);
extern void output(FILE *fp);
extern void mysort();

int main(){
    printf("a——输入\n");
    printf("b——输出\n");
    printf("c——排序\n");
    FILE *fp = fopen("./user.dat", "a+");
    switch(getchar()){
        case 'a':
                input(fp);
                break;
        case 'b':
                output(fp);
                break;
        case 'c':
                mysort();
                break;
        default:
                printf("您的输入有误\n");
    }
    return 0;
}
