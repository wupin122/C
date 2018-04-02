#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no;
    puts("请输入一个整数。");
    scanf("%d",&no);
    switch(no%2)
    {
        case 1:printf("该整数是奇数。\n");break;
        case 2:printf("该整数是偶数。\n");break;
    }
    return 0;
}
