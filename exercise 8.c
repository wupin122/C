#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100],b[100][100],i,j,l=0;
    for (i = 0; i < 100; ++i)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            break;
        for (j = 0; j < a[i]; ++j)
            scanf("%d",&b[i][j]);
        l++;
    }
    for (int k = 0; k <l ; ++k)
    {
        int sum=0;
        for (int i = 0; i < a[k]; ++i)
            sum+=b[k][i];
        printf("%.2f\n", (float)sum/a[k]);
    }
    return 0;
}
