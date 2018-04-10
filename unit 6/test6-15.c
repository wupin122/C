#include <stdio.h>
#define number 5
int put_count(void)
{
    static int m=0;
    m++;
    return m;
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < number; ++i)
    {
        printf("put_count:第%d次\n",put_count());
    }
    
    return 0;
}
