#include <stdio.h>
unsigned set(unsigned x,int pos)
{
    return x = x | (1U << pos - 1);
}
unsigned reset(unsigned x, int pos)
{
    return x = x & (~(1U << pos - 1));
}
unsigned inverse(unsigned x, int pos)
{
    return x ^= 1U << pos - 1;
}
int main(int argc, char const *argv[])
{
    unsigned int x,pos;
    printf("请输入一个无符号整数：");
    scanf("%u",&x);
    printf("请输入你想将它的第几位改变：");
    scanf("%u",&pos);
    printf("%u的第%d位设为1后的值：%u\n", x, pos, set(x, pos));
    printf("%u的第%d位设为0后的值：%u\n", x, pos, reset(x, pos));
    printf("%u的第%d位取反后的值：%u\n", x, pos, inverse(x, pos));
    return 0;
}
