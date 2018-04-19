#include <stdio.h>
#include <time.h>
#define CLK_TCK 100
int main(int argc, char const *argv[])
{
    int c1,c2,h,m,s;
    scanf("%d%d",&c1,&c2);
    s=(float)(c2-c1)/CLK_TCK+0.5;
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
