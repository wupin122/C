#include<stdio.h>
#define number 5
void intary_rcpy(int v1[],const int v2[],int n)
{
    printf("数组v1为数组v2的倒序排列。\n");
    printf("v1数组：\n");
    for (int i = 0; i <n; ++i)
    {
        v1[i]=v2[n-1-i];
        printf("%4d",v1[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int v1[number],v2[number];
    printf("请输入元素个数为%d的v2数组。\n",number);
    for (int i = 0; i < number; ++i)
    {
        printf("[%d]=", i);
        scanf("%d",&v2[i]);
    }
    printf("v2数组：\n");
    for (int i = 0; i < number; ++i)
        printf("%4d",v2[i] );
    printf("\n");
    intary_rcpy(v1,v2,number);
    return 0;
}
