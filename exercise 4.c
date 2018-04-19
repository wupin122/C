#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,change,l;
    printf("请输入两个正整数：");
    scanf("%d%d",&a,&b);
    if(a<b){
        change=a;
        a=b;
        b=change;
    }
    while(a%b)
    {
        l=a%b;
        a=b;
        b=l;
    }
    printf("最大公因数为：%d\n",b );
    return 0;
}