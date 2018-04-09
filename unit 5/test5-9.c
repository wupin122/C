#include <stdio.h>
#define number 80
int main(int argc, char const *argv[])
{
    int num;
    int tensu[number];
    int bumpu[11]={0};
    char list[3][11];
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
    puts("\n--------------------分布图--------------------");
    for (int i = 0; i < 11; ++i)
    {
        if(bumpu[i]==3)
            list[0][i]='*';
        else
            list[0][i]='\0';
        if(bumpu[i]==2||bumpu[i]==3)
            list[1][i]='*';
        else
            list[1][i]='\0';
        if(bumpu[i]==2||bumpu[i]==3||bumpu[i]==1)
            list[2][i]='*';
        else
            list[2][i]='\0';
    }
    for (int j = 0; j < 3; ++j)
    {
        for (int i = 0; i < 11; ++i)
            printf("%c\t",list[j][i] );
        printf("\n");
    }
    for (int i = 0; i < 45; ++i)
        printf("-");
    printf("\n");
    for (int i = 0; i < 11; ++i)
        printf("%d\t",i*10 );
    printf("\n");
    return 0;
}
