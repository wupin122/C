#include <stdio.h>
int cube(int x)
{
    int pow=1;
    for (int i = 0; i < 3; ++i)
        pow*=x;
    return pow;
}
int main(int argc, char const *argv[])
{
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    printf("此整数的立方为%d。\n", cube(x));
    
    return 0;
}
