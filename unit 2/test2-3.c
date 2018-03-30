#include<stdio.h>
int main(int argc, char const *argv[])
{
	double a;
	printf("请输入一个实数：");
	scanf("%lf",&a);
	printf("你输入的是%f。\n", a);
	return 0;
}