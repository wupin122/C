#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x[5];
	for (int i = 0; i < 5; ++i)
	{
		x[i]=5-i;
		printf("x[%d]=%d\n", i,x[i]);
	}
	return 0;
}