#include <stdio.h>
void alert(int n)
{
    for (int i = 0; i < n; ++i)
        putchar('\a');
}
int main(int argc, char const *argv[])
{
    int n;
    printf("请输入响铃的次数：");
    scanf("%d",&n);
    alert(n);
    return 0;
}
