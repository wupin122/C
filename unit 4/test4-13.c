#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,i;
    printf("n的值：");
    scanf("%d",&n);
    i=n;
    for(;n>0;){
        sum=sum+n;
        n--;
    }
    printf("1到%d的和为%d。\n", i,sum);
    return 0;
}
