#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c=1,d,i;
	printf("请输入一个整数：");
	scanf("%d",&a);
	for (int i = 0; i < a; ++i)
	{
		b=c++;
		d=b%10;
		printf("%d", d);
	}

	return 0;
}