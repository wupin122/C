#include <stdio.h>
#define number_1 50
#define number_2 50
#define number_3 50
int main(int argc, char const *argv[])
{
    int a,z[number_1][number_2][number_3],max[number_1];
    int m,n,x,y,sum[number_1][number_2][number_3]={0};;
    scanf("%d",&a);
    for (int i = 0; i < a; ++i)
    {
        scanf("%d%d%d%d",&m,&n,&x,&y);
        
        for (int j = 0; j < m; ++j)
            for (int k = 0; k < n; ++k)
                scanf("%d",&z[i][j][k]);
        
        for (int j = 0; j < (m-x+1); ++j)
            for (int k = 0; k < (n-y+1); ++k)
                for (int m = 0; m < x; ++m)
                    for (int n = 0; n < y; ++n)
                        sum[i][j][k]+=z[i][j+m][k+n];
        
        max[i]=sum[i][0][0];
        for (int j = 0; j < (m-x+1); ++j)
            for (int k = 0; k < (n-y+1); ++k)
            {
                if(sum[i][j][k]>max[i])
                    max[i]=sum[i][j][k];
            }
    }
    for (int i = 0; i < a; ++i)
        printf("%d\n", max[i]);
    return 0;
}


