#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
	printf("float的长度：%d\n",(unsigned)sizeof (float));
	printf("double的长度：%d\n",(unsigned)sizeof (double));
	printf("long double的长度：%d\n",(unsigned)sizeof (long double));
	return 0;
}