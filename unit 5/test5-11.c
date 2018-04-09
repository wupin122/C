#include<stdio.h>
int main(int argc, char const *argv[])
{
    int v[6][2];
    printf("请输入6名学生的2门课程的成绩：\n");
    for (int i = 0; i < 6; ++i)
    {
        printf("学生%d\n", i+1);
        for (int j = 0; j < 2; ++j)
        {
            printf("课程%d:",j+1 );
            scanf("%d",&v[i][j]);
        }
    }
    for (int j = 0; j < 2; ++j)
    {
        printf("课程%d:\n",j+1 );
        int sum=0;
        for (int i = 0; i < 6; ++i)
            sum+=v[i][j];
        printf("总分：%d\t平均分：%d\n",sum,sum/6 );
    }
    for (int i = 0; i < 6; ++i)
    {
        int sum=0;
        printf("学生%d:\n", i+1);
        for (int j = 0; j < 2; ++j)
            sum+=v[i][j];
        printf("总分：%d\t平均分：%d\n",sum,sum/2 );
    }
    return 0;
}
