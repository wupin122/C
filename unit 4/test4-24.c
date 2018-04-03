#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    puts("让我们来画一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d",&a);
    for (int i = 1; i <=a; ++i)
    {
        for (int k = 0; k <(a-i) ; ++k)
        {
            printf(" ");
        }
        for (int j = 0; j <((i-1)*2+1) ; ++j)
        {
            printf("*");
        }
        for (int k = 0; k <(a-i) ; ++k)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
