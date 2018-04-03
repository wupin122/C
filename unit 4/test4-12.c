#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,i=0,j;
    printf("请输入一个人正整数：");
    scanf("%d",&no);
    j=no;
    while(no>0){
        no/=10;
        i++;
    }
    printf("%d的位数是%d。\n", j,i);
    return 0;
}
