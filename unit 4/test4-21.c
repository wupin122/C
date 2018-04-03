#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    puts("生成一个正方形");
    printf("正方形有几层：");
    scanf("%d",&a);
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a ; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
