#include<stdio.h>
int main(int argc, char const *argv[])
{
	int no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	if(no==0)
		puts("该整数为0。");
	else if(no>0)
		puts("该整数为正数。")；
	else if(no<0)
		puts("该整数为负数。")；
	return 0;
}