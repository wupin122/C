#include <stdio.h>
#define number 5
int min_of(const int v[],int n)
{
    int min=v[0];
    for (int i = 1; i < number; ++i)
        if (min>v[i])
            min=v[i];
    return min;
}
int main(int argc, char const *argv[])
{
    int v[5];
    printf("请输入元素个素为%d的数组。\n",number);
    for (int i = 0; i < number; ++i)
    {
        printf("[%d]:",i );
        scanf("%d",&v[i]);
    }
    printf("数组中最小值为%d。\n", min_of(v,number));
    return 0;
}
