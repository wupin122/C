#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	printf("四个数中最大值为%d\n", max(max(a,b),max(c,d)));
	printf("四个数中最大值为%d\n", max(max(max(a,b),c),d));
	return 0;
}