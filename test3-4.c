#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	puts("请输入两个整数。")
	printf("整数A：");
	scanf("%d",&a);
	printf("整数B：");
	scanf("%d",&b);
	if(a==b)
		puts("A等于B");
	else
		if(a>b)
			puts("A大于B");
		else
			puts("A小于B");
	return 0;
}