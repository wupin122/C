#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no;
    printf("整数值：");
    scanf("%d",&no);
    for (int i = 1; i <=no; i+=2)
        printf("%d ",i );
    putchar('\n');
    return 0;
}
