#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,x[10]={0},m[10]={10},b=1,y[10];
    scanf("%d",&a);
    for (int i = 1; i < 10; ++i){
        m[i]=m[i-1]*10;
        if(m[i]>a&&a<m[i-1])
            break;
        b++;
    }
    for (int i = 0; i < b; ++i)
    {
        y[i]=a%m[0];
        a=a/m[0];
    }
    for (int i = 0; i < b; ++i)
        switch(y[i])
    {
        case 0:x[0]++;break;
        case 1:x[1]++;break;
        case 2:x[2]++;break;
        case 3:x[3]++;break;
        case 4:x[4]++;break;
        case 5:x[5]++;break;
        case 6:x[6]++;break;
        case 7:x[7]++;break;
        case 8:x[8]++;break;
        case 9:x[9]++;break;
    }
    for (int i = 0; i < 10; ++i)
        printf("%d:%d\n", i,x[i]);
    return 0;
}
