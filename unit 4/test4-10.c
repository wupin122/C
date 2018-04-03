#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,i=0;
	printf("正整数：");
	scanf("%d",&a);
	if(a>0)
	while(i<a){
		i++;
		printf("*\n");
	}

	return 0;
}