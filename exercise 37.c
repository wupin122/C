#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,x[1000],y[1000],z[1000],a;
    char s[1000][20];
    scanf("%d",&N);
    for (int i = 0; i < N; ++i)
        scanf("%s %d %d",s[i],&x[i],&y[i]);
    scanf("%d",&a);
    for (int i = 0; i < a; ++i){
        scanf("%d",&z[i]);
        for (int j = 0; j < N; ++j)
            if (z[i]==x[j])
                printf("%s %d\n", s[j],y[j]);
    }
    return 0;
}
