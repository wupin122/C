#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int j,a=0,x[10000],b,c,m=0;
    for (int i = 1; i <= 10000; ++i)
    {
        for ( j = 2; j <= sqrt(i); ++j)
            if (i%j==0)
                break;
        if(j>sqrt(i))
        {
            x[a]=i;
            a++;
        }
    }
    scanf("%d%d",&b,&c);
    for (int i = 5; i <= 27; ++i){
        printf("%-4d", x[i]);
        m++;
        if(m%10==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
