#include <stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    unsigned int n;
    do{
        printf("请输入一个非负整数：");
        scanf("%d",&n);
        if (n>UINT_MAX||n<1e-6)
            printf("输入的数字发生高位溢出，请重新输入。\n");
        else{
            printf("位左移1位后的值为：%u,除2的值为：%u\n",n<<1,(n<<1)/2);
            printf("位右移1位后的值为：%u,乘2的值为：%u\n",n>>1,(n>>1)*2);
            
        }
    }while(n>UINT_MAX||n<1e-6);
    return 0;
}
