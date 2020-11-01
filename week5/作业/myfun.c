#include "my.h"


//struct user *user1;


int input() {
	struct user user1;
	user1 = (struct user)malloc(sizeof(struct user));
	FILE *fp;
	fp = fopen("./user.dat", "a+");
	printf("请输入userid：\n");
	printf("11111111111\n\r");
	int iii= 1;
	//scanf("%d",&iii);
	//user1->id = iii;
	printf("aaaaaaaaa");
	//fgets(&user1->id, sizeof(int), fp);
	printf("请输入name：\n");
	scanf("%s", user1->name);
	//fgets(&user1->name, 8, fp);
	printf("请输入htel：\n");
	scanf("%s", user1->htel);
	//fgets(&user1->htel, 12, fp);
	printf("请输入tel：\n");
	scanf("%s", user1->tel);
	//fgets(&user1->tel, 12, fp);

	int i = fwrite(user1, sizeof(user1), 1, fp);
	fclose(fp);
	return i;
}


void output() {
	struct user *user1;
	int fd;
	fd = open("./user.dat", "r");
	
	printf("userid\tname\thtel\ttel\n");

	int n = lseek(fd, 0, SEEK_END);	// user.dat文件的大小

	for (int i = 0; i < n/sizeof(user1); i++) {
		read(fd, user1->id, sizeof(int));
		read(fd, user1->name, 8);
		read(fd, user1->htel, 12);
		read(fd, user1->tel, 12);

		printf("%d\t%s\t%s\t%s\n", user1->id, user1->name, user1->htel, user1->tel);
	}
}





