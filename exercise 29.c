#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,x[10],sum=0;
    scanf("%d",&N);
    for (int i = 0; i < N; ++i)
        scanf("%d",&x[i]);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (x[i]!=x[j])
                sum+=x[i]*10+x[j];
    printf("%d\n", sum);
    return 0;
}
