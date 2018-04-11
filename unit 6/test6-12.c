#include <stdio.h>
void mat_mul(const int a[3][4],const int b[4][3],int c[3][3])
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 4; ++k)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
    printf("矩阵的乘积为：\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%d\t",c[i][j] );
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int a[3][4],b[4][3],c[3][3]={0};
    printf("请输入3行4列的数组。\n");
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("请输入4行3列的数组。\n");
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 3; ++j)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    mat_mul(a,b,c);
    return 0;
}
