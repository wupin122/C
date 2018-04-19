#include <stdio.h>
#define number 100
double sum(int n)
{
    double sum=0;
    for (int i = 1; i <= n; ++i)
    {
        if(i%2==0)
            sum+=(-1.0/i);
        else
            sum+=1.0/i;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int m,x[number];
    double y[number];
    scanf("%d",&m);
    for (int i = 0; i < m; ++i)
        scanf("%d",&x[i]);
    for (int i = 0; i < m; ++i)
        y[i]=sum(x[i]);
    for (int i = 0; i < m; ++i)
        printf("%.2f\n", y[i]);
    return 0;
}
