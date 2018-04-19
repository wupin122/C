#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("请输入三个实数：");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        if(a==b&&b==c)
            printf("1");
        else if(a==b||b==c||a==c)
            printf("2");
        else
            printf("3");
    }
    else
        printf("0");
    printf("\n");
    return 0;
}
