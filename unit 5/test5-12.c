#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum[4][3]={0};
    int tensu[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    for (int i = 0; i < 2; ++i)
    {
        printf("第%d次考试的分数\n",i+1 );
        for (int j = 0; j < 4; ++j)
        {
            for (int k = 0; k < 3; ++k)
                printf("%4d",tensu[i][j][k] );
            printf("\n");
        }
    }
    for (int j = 0; j < 4; ++j)
    {
        for (int k = 0; k < 3; ++k)
        {
            for (int m = 0; m < 2; ++m)
            {
                sum[j][k]+=tensu[m][j][k];
            }
        }
    }
    puts("总分");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }
    
    return 0;
}
