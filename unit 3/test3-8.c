#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n1,n2;
	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	if(n1>n2)
		printf("它们的差是%d。\n", n1-n2);
	else
		printf("它们的差是%d。\n", n2-n1);
	return 0;
}