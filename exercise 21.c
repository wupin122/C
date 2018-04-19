#include <stdio.h>
#define number 100
int main(int argc, char const *argv[])
{
    int x[number],a=0,y[1001]={0,0,2,2};
    for (int i = 0; i < number; ++i)//记录跳多少次
    {
        scanf("%d",&x[i]);
        if(x[i]==0)
            break;
        a++;
    }
    for(int i=4;i<=1000;i++)
        y[i]=(y[i-1]+y[i-2]*2)%10000;
    for (int i = 0; i < a; ++i)
        printf("%d\n",y[(x[i])] );
    return 0;
}
