#include <stdio.h>
#define number 5
void rev_intary(int v[],int n)
{
    printf("数组的倒序：\n");
    for (int i = n-1; i >=0; --i)
        printf("[%d]=%d\n",i, v[i]);
}
int main(int argc, char const *argv[])
{
    int v[number];
    printf("请输入元素个数为%d的数组。\n",number);
    for (int i = 0; i < number; ++i)
    {
        printf("[%d]=",i );
        scanf("%d",&v[i]);
    }
    rev_intary(v,number);
    return 0;
}
