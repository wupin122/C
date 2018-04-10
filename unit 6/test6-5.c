#include <stdio.h>
int sumup(int n)
{
    int m=1;
    for (int i = 1; i <= n; ++i)
        m+=i;
        return m;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("1到%d之间所有整数的和为：%d\n", n,sumup(n));
    return 0;
}
