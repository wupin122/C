#include <stdio.h>
#define number_1 100
#define number_2 10
int main(int argc, char const *argv[])
{
    int n,m,k=0,l = 0;
    int x[number_1][number_2];
    float y[number_1],z[number_2];
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; ++i)
    {
        int sum=0;
        for (int j = 0; j < m; ++j)
        {
            scanf("%d",&x[i][j]);
            sum+=x[i][j];
        }
        y[i]=(float)sum/m;
    }
    for (int i = 0; i < m; ++i)
    {
        int sum=0;
        for (int j = 0; j < n; ++j)
            sum+=x[i][j];
        z[i]=(float)sum/n;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(x[i][j]>z[j])
                k++;
        }
        if(k==m)
            l++;
    }
    for (int i = 0; i < n; ++i)
        printf("%.2f\t", y[i]);
    printf("\n");
    for (int i = 0; i < m; ++i)
        printf("%.2f\t", z[i]);
    printf("\n");
    printf("%d\n", l);
    return 0;
}
