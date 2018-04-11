#include <stdio.h>
unsigned set_n(unsigned x, int pos,int n)
{
    for (int i = pos; i <=n; ++i)
    {
        x = x | (1U << i- 1);
    }
    return x;
}

unsigned reset_n(unsigned x, int pos,int n)
{
    for (int i = pos; i <=n; ++i)
    {
        x = x & (~(1U << i - 1));
    }
    return x;
}
unsigned inverse_n(unsigned x, int pos,int n)
{
    for (int i = pos; i <=n; ++i)
    {
        x ^= 1U << i - 1;
    }
    return x;
}
int main(int argc, char const *argv[])
{
    unsigned int x,pos,n;
   printf("请输入一个非负整数：");
    scanf("%u", &x);
    printf("请输入从第几位开始：");
    scanf("%d", &pos);
    printf("请输入到第几位结束：");
    scanf("%d", &n);
    printf("%u的从第%d位开始的%d位设为1后的值：%u\n", x, pos, n, set_n(x, pos, n));
    printf("%u的从第%d位开始的%d位设为0后的值：%u\n", x, pos, n, reset_n(x, pos, n));
    printf("%u的从第%d位开始的%d位取反后的值 ：%u\n", x, pos, n, inverse_n(x, pos, n));
    return 0;
}

