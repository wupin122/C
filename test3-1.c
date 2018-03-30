#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	puts("请输入两个整数。");
	printf("整数A:\n");
	scanf("%d",&a);
	printf("整数B:\n");
	scanf("%d",&b);
	if(%(a/b))
		puts("B不是A的约数。");
	return 0;
}