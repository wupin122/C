#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = (a>b?b:a); i < a*b; ++i)
		if (i%a==0&&i%b==0)
			{
				printf("%d\n", i);
				break;
			}
	return 0;
}