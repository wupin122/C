#include <stdio.h>
int main(int argc, char const *argv[])
{
	float list[101][2],m;
	int j = 0;
	for (float i = 0.0; i <= 1.0; i+=0.01)
		for (; j < 101; )
		{
			list[j][1]=i;
			++j;
			break;
		}
	for (int i = 0; i <= 100; ++i)
	{
		list[i][2]=(m+=0.01);
	}
	for (int i = 0; i < 101; ++i)
	{
		printf("x=%f\t",list[i][1] );
		printf("x=%f\n",list[i][2] );
	}
	return 0;
}