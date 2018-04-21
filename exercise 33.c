#include <stdio.h>
int main(int argc, char const *argv[])
{
    char b,s[50][100];
    int a;
    scanf("%d %c",&a,&b);
    for (int i = 0; i < (int)(a/2.0+0.5); ++i)
        for (int j = 0; j < a; ++j)
            if(i==0||i==(int)(a/2.0+0.5)-1)
                s[i][j]=b;
            else
                s[i][j]=' ';
    for (int i = 1; i <(int)(a/2.0+0.5)-1; ++i){
        s[i][0]=b;
        s[i][a-1]=b;
    }
    for (int i = 0; i < (int)(a/2.0+0.5); ++i){
        for(int j=0;j<a;++j)
            printf("%c", s[i][j]);
        printf("\n");
    }
    return 0;
}
