#include <stdio.h>
#define number 5
int main(int argc, char const *argv[])
{
    static double v[number];
    for (int i = 0; i < number; ++i)
    {
        printf("[%d]=%lf\n",i,v[i] );
    }
    return 0;
}
