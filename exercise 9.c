#include <stdio.h>
#define number 100
int main(int argc, char const *argv[])
{
	int a[number],b[number],c[number],m=0;
	for (int i = 0; i < number; ++i){
		scanf("%d/%d/%d",&a[i],&b[i],&c[i]);
		m++;
	}
	printf("\n");
	for (int i = 0; i < m; ++i)
	{
		if (a[i]%100==0)
			if(a[i]%4==0){
				if (b[i]<3)
				{
					if(b[i]==1)
						printf("%d\n", c[i]);
					if(b[i]==2)
						printf("%d\n", c[i]+31);
				}
				else
					printf("%d\n", (int)((b[i]-1)/2)*61+c[i]-1);
			}
			else
			{
				if (b[i]<3)
				{
					if(b[i]==1)
						printf("%d\n", c[i]);
					if(b[i]==2)
						printf("%d\n", c[i]+31);
				}
				else
					printf("%d\n", (int)((b[i]-1)/2)*61+c[i]-2);
			}
		else if(a[i]%4==0){
			if (b[i]<3)
			{
				if(b[i]==1)
					printf("%d\n", c[i]);
				if(b[i]==2)
					printf("%d\n", c[i]+31);
			}
			else
				printf("%d\n", (int)((b[i]-1)/2)*61+c[i]-1);
		}
		else
		{
			if (b[i]<3)
				{
					if(b[i]==1)
						printf("%d\n", c[i]);
					if(b[i]==2)
						printf("%d\n", c[i]+31);
				}
			else
				printf("%d\n", (int)((b[i]-1)/2)*61+c[i]-2);
		}
	}
	return 0;
}