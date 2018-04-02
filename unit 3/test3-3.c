#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if(a>0)
        printf("绝对值是%d。\n", a);
    else
        printf("绝对值是%d。\n",-a);
    return 0;
}
