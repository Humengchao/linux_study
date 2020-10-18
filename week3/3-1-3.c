#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp = fopen("./3-1-3.txt", "w");
	char buf[80];
	memset(buf, 0, sizeof(buf));
	fgets(buf, sizeof(buf), stdin);
	int i =fwrite(buf, sizeof(buf), sizeof(char), fp);
	fclose(fp);
	
	fopen(fp, "r")
	printf("%d\n",i);

	fclose(fp);
	return 0;
}
