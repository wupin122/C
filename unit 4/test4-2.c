#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,sum=0,i=0,j,m;
    puts("请输入两个整数。");
    printf("整数a:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);
    c=a;
    d=b;
    m=(a>b)?(a-b):(b-a);
    do{
        i++;
        if(b>a)
        {
            j=c++;
            sum=j+sum;
        }
        else
        {
            j=d++;
            sum=j+sum;
        }
    }while(i<=m);
    printf("大于等于%d小于等于%d的所有整数的和是%d。\n",(a>b)?b:a,(a>b)?a:b,sum);
    return 0;
}

