#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double s;
    printf("请输入一个实数：");
    scanf("%lf",&s);
    printf("面积为该实数的正方形的边长：%lf\n",sqrt(s));
    return 0;
}
