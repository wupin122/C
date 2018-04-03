#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=0;
    printf("请输入一个整数：");
    scanf("%d",&a);
    while(i<(a-1))
        printf("%d ",i+=2 );
    printf("\n");
    return 0;
}
