#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    puts("让我们来画一个长方形。");
    printf("一边：");
    scanf("%d",&a);
    printf("另一边：");
    scanf("%d",&b);
    if (b>a)
    {
        a=b;
        b=a;
    }
    for (int i = 0; i < b; ++i)
    {
        for (int j= 0; j < a; ++j)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}
