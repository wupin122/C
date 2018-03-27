#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("请输入两个整数\n");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:");
    scanf("%d",&c);
    printf("它们的和是%d\n", a+b+c);
    return 0;
}
