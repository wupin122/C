#include <stdio.h>
#define number 10
int main(int argc, char const *argv[])
{
    int a,x[number][3];
    scanf("%d",&a);
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d",&x[i][j]);
    for (int i = 0; i < a; ++i)
        if (x[i][0]+x[i][1]>x[i][2])
            printf("case #%d: ture\n", i+1);
        else
            printf("case #%d: false\n", i+1);
    return 0;
}
