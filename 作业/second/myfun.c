#include "my.h"

void output(FILE *fp);
void sace(node *t);
void input(FILE *fp);
node* read_node(FILE *fp);

void output(FILE* fp){
    // 先读文件，并将这个数据写入到结构体链表中，再打印
    node *head = read_node(fp);

    if(head->next == NULL){
            printf("暂无数据！\n");
            exit(0);
    }
    printf("id\t\t\tname\t\t\thtel\t\t\ttel\n");
    node *t;
    t = head;
    while(t->next){
        t = t->next;
        printf("%d\t\t\t%s\t\t\t%s\t\t\t%s\n", t->id, t->name, t->htel, t->tel);

    }

    fclose(fp);
}

void save(node *t){
    FILE *fp;
    fp = fopen("./user.dat", "a+");
    fprintf(fp, "%d\t\t\t%s\t\t\t%s\t\t\t%s\n", t->id, t->name, t->htel, t->tel);
    fclose(fp);
}

void input(FILE *fp){
    node *t = (node*)malloc(sizeof(node));
    printf("请输入id:");
    scanf("%d", &t->id);
    printf("请输入name:");
    scanf("%s", t->name);
    printf("请输入手机号码:");
    scanf("%s", t->htel);
    printf("请输入电话号码:");
    scanf("%s", t->tel);

    node *head = read_node(fp);
    while(head->next){
        head = head->next;
        if(t->id == head->id){
            printf("id不能重复，请重新输入\n");
            input(fp);
            exit(0);
        }
    }
    save(t);
}

node* read_node(FILE *fp){
    node *head, *p;
    head = (node*)malloc(sizeof(node));
    p = head;
    char c;
    while((c = getc(fp)) != EOF) {
            // 由于上面的getc读取了个字符，导致文件指针往后偏移一位，现在通过ungetc压回去一个
            ungetc(c, fp);
            node *q = (node*)malloc(sizeof(node));
            fscanf(fp, "%d\t\t\t%s\t\t\t%s\t\t\t%s\n", &q->id, q->name, q->htel, q->tel);
            p->next = q;
            p = p->next;
    }
    return head;
}

void mysort(){
    printf("请选择排序方式：\n");
    printf("\tu：对姓名升序排序。");
    printf("\td：对姓名降序排序。");
    char c;
    // 通过一个getchar来吸收回车键
    getchar();
    c = getchar();
    if (c == 'u'){
        system("sort -k 2 user.dat -o user.dat"); 
    } else if (c == 'd'){
        system("sort -k 2 user.dat -o user.dat");
        system("sort -r user.dat -o user.dat");
    } else{
    printf("您的输入有误,重新开始\n");
    mysort();
    }
}
