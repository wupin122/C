#include <stdio.h>
#include <limits.h>
int main(void)
{
    unsigned x;
    printf("请输入一个大于%u的非负整数：",UINT_MAX);
    scanf("%u", &x);
    printf("\n得到的数是：%u\n", x);
    return (0);
}
