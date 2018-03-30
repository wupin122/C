#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a ,b,c,max;
	puts("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
		if(c>b)
			max=c;
		else
			max=b;
	else
		if(a>c)
			max=a;
		else
			max=c;
	printf("最小值为%d\n", max);
	return 0;
}