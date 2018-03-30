#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	printf("请输入您的身高：");
	scanf("%d",&a);
	printf("您的标准体重是%.1f公斤\n", (a-100)*0.9);
	return 0;
}