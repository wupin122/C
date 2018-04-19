#include <stdio.h>
#define number 100
#define number_1 100
#define number_2 100
int main(int argc, char const *argv[])
{
    int n[number_1]={1},m[number_2]={1},x[number_1][number_2],j=0;
    for (int i = 0; i < number; ++i)
    {
        scanf("%d%d",&n[i],&m[i]);
        if(n[i]==0&&m[i]==0)
            break;
        for (int j = 0; j < n[i]; ++j)
            scanf("%d",&x[i][j]);
        j++;
    }
    for (int i = 0; i < j; ++i)//多少行
        for (int j = 0; j < n[i]-1; ++j)//n-1趟
        {
            for (int k = 0; k < n[i]-1-j; ++k)//比较次数
            {
                int l;
                if(x[i][k]<x[i][k+1]){
                    l=x[i][k];
                    x[i][k]=x[i][k+1];
                    x[i][k+1]=l;
                }
            }
        }
    for (int i = 0; i < j; ++i)
    {
        if (n[i]<m[i])
            for (int k = 0; k < n[i]; ++k)
                printf("%2d", x[i][k]);
        else
            for (int k = 0; k < m[i]; ++k)
                printf("%2d", x[i][k]);
        printf("\n");
    }
    printf("\n");
    return 0;
}

