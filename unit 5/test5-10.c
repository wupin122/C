#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x[4][3],y[3][4],xy[4][4]={0};
    printf("请输入4行3列的矩阵。\n");
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 3; ++j){
            printf("[%d][%d]:", i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    printf("请输入3行4列的矩阵。\n");
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j){
            printf("[%d][%d]:", i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
            {
                xy[i][j]+=(x[i][k]*y[k][j]);
            }
    }
    printf("矩阵的乘积为：\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            printf("%d\t",xy[i][j] );
        printf("\n");
    }
    return 0;
}
