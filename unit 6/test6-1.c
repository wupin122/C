#include <stdio.h>
int min(int a,int b)
{
    return (a>b?b:a);
}
int main(int argc, char const *argv[])
{
    int a,b;
    puts("请输入两个整数。");
    printf("整数a：");scanf("%d",&a);
    printf("整数b：");scanf("%d",&b);
    printf("较小值为%d。\n", min(a,b));
    return 0;
}
