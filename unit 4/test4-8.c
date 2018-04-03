#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no ;
    printf("正整数：");
    scanf("%d",&no);
    while(no-->0)
    {
        putchar('*');
        if(no==0)
            printf("\n");
    }
    return 0;
}
