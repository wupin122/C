#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,x[100][4],y[100],a = 0,b = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < 4; ++j)
            scanf("%d",&x[i][j]);
    for (int i = 0; i < N; ++i){
        y[i]=x[i][0]+x[i][2];
        if (x[i][1]==y[i]&&x[i][3]!=y[i])
            b++;
        if (x[i][3]==y[i]&&x[i][1]!=y[i])
            a++;
    }
    printf("%d %d\n",a,b );
    return 0;
}
