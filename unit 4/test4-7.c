#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=1;
    printf("请输入一个整数：");
    scanf("%d",&a);
    while(i<a)
    {   i*=2;
        printf("% d",i );
    }
    putchar('\n');
    return 0;
}
