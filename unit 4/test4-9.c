#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=0;
    printf("正整数：");
    scanf("%d",&a);
    while(i<a){
        i++;
        if(i%2!=0)
            printf("+");
        else
            printf("-");
    }
    printf("\n");
    return 0;
}
