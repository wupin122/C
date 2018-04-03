#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no;
    printf("显示多少个*：");
    scanf("%d",&no);
    for (int i = 1; i <=no; ++i)
    {
        printf("*");
        if (i%5==0)
        {
            printf("\n");
        }
    }
    if(no%5!=0)
    printf("\n");
    return 0;
}
