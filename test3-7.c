#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,max;
	puts("请输入四个整数：");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	printf("最大值为%d\n", max);
	return 0;
}