#include <stdio.h>
int pow4(int n)
{
	int pow=1;
	for (int i = 0; i < 4; ++i)
		pow*=n;
	return pow;
}
int main(int argc, char const *argv[])
{
	int x;
	printf("请输入一个整数：");
	scanf("%d",&x);
	printf("%d的四次幂为%d。\n",x,pow4(x) );
	return 0;
}