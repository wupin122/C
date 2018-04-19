#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int m,n=0,j;
    for (int i = 1; i <= 100; ++i)
    {
        m=sqrt(i);
        for (j = 2; j <= m; ++j)
            if(i%j==0)
                break;
        if(j>m)
        {
            printf("%d\t",i );
            n++;
            if(n%5==0)
                printf("\n");
        }
    }
    printf("\n");
    return 0;
}
