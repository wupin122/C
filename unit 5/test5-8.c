#include <stdio.h>
#define number 80
int main(int argc, char const *argv[])
{
    int num;
    int tensu[number];
    int bumpu[11]={0};
    printf("请输入学生个数：");
    do{
        scanf("%d",&num);
        if(num<1||num>number)
            printf("\a请输入1～%d的数：", number);
    }while(num<1||num>number);
        printf("请输入%d人的分数。\n",num );
    for (int i = 0; i < num; ++i)
    {
        printf("%2d号：", i+1);
        do{
            scanf("%d",&tensu[i]);
            if(tensu[i]<0||tensu[i]>100)
                printf("\a请输入1～100的数：");
        }while(tensu[i]<0||tensu[i]>100);
        bumpu[tensu[i]/10]++;
    }
    puts("---分布图---");
    for (int i = 0; i <10; ++i)
    {
        printf("%3d - %2d:", i*10,i*10+9);
        for (int j = 0; j < bumpu[i]; ++j)
            putchar('*');
        putchar('\n');
    }
    printf("\t 100:");
    for (int i = 0; i < bumpu[10]; ++i)
        putchar('*');
    putchar('\n');
    return 0;
}
