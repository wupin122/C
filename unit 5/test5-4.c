#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5]={17,23,36};
    int b[5];
    for (int i = 0; i < 5; ++i)
    {
        b[4-i]=a[i];
    }
    puts(" a  b ");
    puts("-------");
    for (int i = 0; i < 5; ++i)
    {
        printf("%3d%3d\n",a[i],b[i] );
    }
    return 0;
}
