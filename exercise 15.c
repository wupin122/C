#include <stdio.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,x[32];
    char y[32];
    scanf("%d",&a);
    for (int i = 0; i < a; ++i){
        scanf("%d",&x[i]);
        y[i]=x[i];
    }
    printf("%s\n",y );
    return 0;
}
