#include <stdio.h>
#define diff(x,y) (((x)>(y))?(x)-(y):(y)-(x))
int main(int argc, char const *argv[])
{
	int x,y;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	printf("x、y二值的差：%d\n", diff(x,y));
	return 0;
}