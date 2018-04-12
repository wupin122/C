#include <stdio.h>
#define number 5
void bsort(int a[],int n)
{
    for (int i = 0; i < n-1; ++i)
        for (int j = 0; j < n-1-i; ++j)
            if (a[j+1]<a[j])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
}
int main(int argc, char const *argv[])
{
    int height[number];
    printf("请输入%d人的身高。\n",number);
    for (int i = 0; i < number; ++i)
    {
        printf("%2d 号：",i+1 );
        scanf("%d",&height[i]);
    }
    bsort(height,number);
    puts("按升序排列。");
    for (int i = 0; i < number; ++i)
        printf("%2d号 ：%d\n",i+1 ,height[i]);
    return 0;
}