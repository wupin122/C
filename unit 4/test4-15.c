#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,i;
	printf("开始数值（cm）：");
	scanf("%d",&a);
	printf("结束数值（cm）：");
	scanf("%d",&b);
	printf("间隔数值（cm）：");
	scanf("%d",&c);
	i=a;
	while(i>=a&&i<=b){
		printf("%dcm\t",i );
		printf("%.2fkg\n", (i-100)*0.9);
		i=i+c;
		printf("\n");
	}
	return 0;
}