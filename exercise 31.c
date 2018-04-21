#include <stdio.h>
#define number 100
int main(int argc, char const *argv[])
{
    int T,x[number][2];
    scanf("%d",&T);
    for (int i = 0; i < T; ++i)
        scanf("%d%d",&x[i][0],&x[i][1]);
    for (int i = 0; i < T; ++i)
        if(x[i][0]%x[i][1]==0)
            puts("YES");
        else
            puts("NO");
    return 0;
}
