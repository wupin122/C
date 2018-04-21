#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,M;
    int x[100],y[100],k[100][100],z[100]={0};
    scanf("%d %d",&N,&M);
    for (int i = 0; i < M; ++i)
        scanf("%d",&x[i]);
    for (int i = 0; i < M; ++i)
        scanf("%d",&y[i]);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            scanf("%d",&k[i][j]);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if(k[i][j]==y[j])
                z[i]+=x[j];
    for (int i = 0; i < N; ++i)
        printf("%d\n", z[i]);
    return 0;
}
