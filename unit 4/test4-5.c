#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=0;
    while(i<no){
        printf("%d", ++i);
    }
    if(no>=0)
        printf("\n");
    return 0;
}
