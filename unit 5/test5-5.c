#include <stdio.h>
#define number 7
int main(int argc, char const *argv[])
{
	int x[number];
	for (int i = 0; i < number; ++i)
	{
		printf("x[%d]=\n", i);
		scanf("%d",&x[i]);
	}
	puts("倒序排列了。");
	for (int i = 0; i < number; ++i)
		printf("x[%d]=%d\n", i,x[number-1-i]);
	return 0;
}