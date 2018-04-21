#include <stdio.h>
#define number 100
int main(int argc, char const *argv[])
{
    float x[number][number],max[number];
    int N,y[number];
    scanf("%d",&N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d",&y[i]);
        for (int j = 0; j < y[i]; ++j)
            scanf("%f",&x[i][j]);
    }
    for (int i = 0; i < N; ++i){
        max[i]=x[i][0];
        for (int j = 1; j < y[i]; ++j)
        {
            if (max[i]<x[i][j])
                max[i]=x[i][j];
        }
        printf("%.2f\n",max[i] );
    }
    return 0;
}
