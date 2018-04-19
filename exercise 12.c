#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,j = 0;
    scanf("%d",&n);
    for (int i = 0; n!=1; ++i)
    {
        if (n%2)
            n=(3*n+1)/2;
        else
            n=n/2;
        j++;
    }
    printf("%d\n", j);
    return 0;
}
