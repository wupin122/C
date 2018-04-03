#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b=0;
    printf("整数值：");
    scanf("%d",&a);
    for (int i = 1; i <=a; ++i)
    {
        if(a%i==0){
            printf("%d\n",i);
            b++;
        }
    }
    printf("约数有%d个。\n", b);
    return 0;
}
