#include <stdio.h>
int gcd(int x,int y)
{
    int a;
    if(x<y)
    {
        a=x;
        x=y;
        y=a;
    }
    return y==0?x:gcd(y,x%y);
}
int main(int argc, char const *argv[])
{
    int x,y;
    do{
    printf("请输入两个非0整数：");
    scanf("%d%d",&x,&y);
    }while(x==0||y==0);
    printf("两个整数的最大公约数为%d\n",gcd(x,y));
    return 0;
}