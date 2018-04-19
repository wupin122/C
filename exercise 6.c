#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a[100],b[100][100],i,j,l=0,temp;
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
        for (int i = 0; i < a[k]-1; ++i)
            for (int j = 0; j < a[k]-i-1; ++i)
                if (abs(b[k][j])<abs(b[k][j+1]))
                {
                    temp=b[k][j];
                    b[k][j]=b[k][j+1];
                    b[k][j+1]=temp;
                }
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < a[i]; ++j)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    return 0;
}
