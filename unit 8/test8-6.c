#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num,m=1;
	printf("请输入一个整数：");
	scanf("%d",&num);
	for (int i = 1; i <=num; ++i)
		m*=i;
	printf("%d的阶乘为%d。\n", num,m);
	return 0;
}