#include <stdio.h>
#define number 7
int search_idx(const int v[],int idx[],int key,int n)
{
    int m=0;
    for (int i = 0; i < n; ++i)
        if (v[i]==key)
        {
            idx[m]=i;
            m++;
        }
    return (m);
}
int main(int argc, char const *argv[])
{
    int v[number],idx[number],key;
    printf("请输入元素个数为%d的数组。\n",number );
    for (int i = 0; i < number; ++i)
    {
        printf("v[%d]:", i);
        scanf("%d",&v[i]);
    }
    printf("请输入你要查找的数字：");
    scanf("%d",&key);
    search_idx(v,idx,key,number);
    printf("与之相同的数组元素:");
    for (int i = 1; i < search_idx(v,idx,key,number); ++i)
    {
        printf("v[%d]\t", idx[i]);
    }
    putchar('\n');
    printf("数组中相同的数字有%d。\n", search_idx(v,idx,key,number));
    return 0;
}
