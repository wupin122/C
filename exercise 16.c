#include <stdio.h>
#include <string.h>
#define number 10
int main(int argc, char const *argv[])
{
    int a,k[10][5]={0};
    char x[10][100],y[6]={"aeiou"};
    scanf("%d",&a);
    getchar();
    for (int i = 0; i < a; ++i)
        gets(x[i]);
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < strlen(x[i]); ++j)
            switch(x[i][j]){
                case 'a': k[i][0]++;break;
                case 'e': k[i][1]++;break;
                case 'i': k[i][2]++;break;
                case 'o': k[i][3]++;break;
                case 'u': k[i][4]++;break;
            }
    for (int i = 0; i < a; ++i){
        for (int j = 0; j < 5; ++j)
            printf("%c:%d\n",y[i],k[i][j]);
        if(i!=a-1)
            printf("\n");
    }
    return 0;
}
