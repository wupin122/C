#include <stdio.h>
#define swap(type,a,b) {type t;t = a; a = b; b = t;}
int main(int argc, char const *argv[])
{
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    swap(int, x, y);
    printf("x=%d\ty=%d\n",x,y);
    return 0;
}
