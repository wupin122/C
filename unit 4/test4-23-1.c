#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	puts("生成直角在右上方的等腰直角三角形。");
	printf("短边：");
	scanf("%d",&a);
	for (int i = a; i >0; --i)
	{
		for (int k = 0; k <a-i ; ++k)
		{
			printf(" ");
		}
		for (int j = 0; j <i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}