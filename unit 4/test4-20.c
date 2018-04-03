#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k,j;
    printf("  |");
    for (int i = 1; i <=9; ++i)
    {
        printf("%3d", i);
    }
    printf("\n");
    for (int a = 0; a < 30; ++a)
    {
        printf("-");
    }
    printf("\n");
    for (k = 1; k <=9; ++k)
    {
        printf("%d |",k);
        for(j=1;j<=9;j++)
        {
            printf("%3d",k*j);
        }
        printf("\n");
    }
    return 0;
}
