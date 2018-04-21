#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,x[100000][3],m=0,max = 0,min = 0,n = 0,k=0;
    char name[100000][6];
    scanf("%d",&N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%s",name[i]);
        scanf("%d/%d/%d",&x[i][0],&x[i][1],&x[i][2]);
        if ((x[i][0] < 2014 || (x[i][0] == 2014 && x[i][1] < 9) || (x[i][0] == 2014 && x[i][1] == 9 && x[i][2] <= 6)) &&(x[i][0] > 1814 || (x[i][0] == 1814 && x[i][1] > 9) || (x[i][0] == 1814 && x[i][1] == 9 && x[i][2] >= 6)))
        {
            m++;
            max=x[i][0];
            n=i;
            min=x[i][0];
            k=i;
        }
    }
    for (int i = 0; i < N; ++i)
    {
        if ((x[i][0] < 2014 || (x[i][0] == 2014 && x[i][1] < 9) || (x[i][0] == 2014 && x[i][1] == 9 && x[i][2] <= 6)) &&
            (x[i][0] > 1814 || (x[i][0] == 1814 && x[i][1] > 9) || (x[i][0] == 1814 && x[i][1] == 9 && x[i][2] >= 6))){
            if (x[i][0]>max){
                max=x[i][0];
                n=i;
            }
            else if(x[i][0]==max)
            {
                if(x[i][1]>x[n][1])
                    n=i;
                else if(x[i][1]==x[n][1])
                {
                    if(x[i][2]>x[n][2])
                        n=i;
                }
            }
        }
    }
    for (int i = 0; i < N; ++i)
    {
        if ((x[i][0] < 2014 || (x[i][0] == 2014 && x[i][1] < 9) || (x[i][0] == 2014 && x[i][1] == 9 && x[i][2] <= 6)) &&
            (x[i][0] > 1814 || (x[i][0] == 1814 && x[i][1] > 9) || (x[i][0] == 1814 && x[i][1] == 9 && x[i][2] >= 6))){
            if (x[i][0]<min){
                min=x[i][0];
                k=i;
            }
            else if(x[i][0]==min)
            {
                if(x[i][1]<    x[k][1])
                    k=i;
                else if(x[i][1]==x[k][1])
                {
                    if(x[i][2]<x[k][2])
                        k=i;
                }
            }
        }
    }
    if(m!=0)
        printf("%d %s %s\n",m,name[k],name[n] );
    else
        printf("%d\n", m);
    return 0;
}

