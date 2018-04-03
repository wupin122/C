#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");
    scanf("%d",&a);
    for (int i = 1; i <= a; ++i)
    {
        for (int k = 0; k < i-1; ++k)
        {
            printf(" ");
        }
        for (int j = 0; j <((a-i)*2+1); ++j)
        {
            printf("%d",i );
        }
        for (int k = 0; k < i-1; ++k)
        {
            printf(" ");
        }
        putchar('\n');
    }
    return 0;
}
