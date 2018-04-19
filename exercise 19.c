#include<stdio.h>
#include <math.h>
#define number 50
#define row 50
int main(int argc, char const *argv[])
{
	int x[row][2],a;
	int y[row]={0};
	float max;
	scanf("%d",&a);
	for (int i = 0; i < a; ++i)
		for (int j = 0; j < 2; ++j)
			scanf("%d",&x[i][j]);
	for (int i = 0; i < a; ++i)
		for (int j = 0; j < 2; ++j)
			y[i]+=x[i][j]*x[i][j];
	max=(float)sqrt(y[0]);
	for (int i = 0; i < a; ++i)
		if(max<(float)sqrt(y[i]))
			max=(float)sqrt(y[i]);
	printf("%.2f\n", max);
	return 0;
}