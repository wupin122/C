#include <stdio.h>
unsigned rrotate(unsigned x,int n)
{
    return x>>n;
}
unsigned lrotate(unsigned x,int n)
{
    return x<<n;
}
int main(int argc, char const *argv[])
{
    unsigned int x,y;
    printf("请输入一个无符号整数：");
    scanf("%u",&x);
    printf("请输入你想计算左/右移几位的值：");
    scanf("%u",&y);
    printf("右移%d后的值为%u。\n", y,rrotate(x,y));
    printf("左移%d后的值为%u。\n", y,lrotate(x,y));
    return 0;
}
