#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n;
    double m;
    long double l;
    printf("请输入一个float型数据 n：");
    scanf("%f",&n);
    printf("请输入一个double型数据 m：");
    scanf("%lf",&m);
    printf("请输入一个flong double型数据 l：");
    scanf("%Lf",&l);
    printf("n:%f\n", n);
    printf("m:%lf\n", m);
    printf("l:%Lf\n", l);
    return 0;
}
