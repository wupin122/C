#include <stdio.h>
#define number 10
int main(int argc, char const *argv[])
{
    int num;
    int tensu[number];
    printf("数据个数：");
    do{
        scanf("%d",&num);
        if(num<1||num>number)
            printf("\a请输入1～%d的数：", number);
    }while(num<1||num>number);
        for (int i = 0; i < num; ++i)
        {
            printf("%d号：", i+1);
            scanf("%d",&tensu[i]);
        }
    printf("{");
    for (int i = 0; i < num; ++i)
    {
        if(i!=num-1)
            printf("%d，",tensu[i] );
        else
            printf("%d}\n",tensu[i] );
    }
    return 0;
}
