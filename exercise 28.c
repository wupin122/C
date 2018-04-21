#include <stdio.h>
#define number 100
int main(int argc, char const *argv[])
{
    char s[number][number];
    int num[number]={0},m;
    scanf("%d",&m);
    getchar();
    for (int i = 0; i < m; ++i)
        gets(s[i]);
    for (int i = 0; i < m; ++i)
        for ( int j = 0; j < number; ++j)
        {
            if(s[i][j]=='\0')
                break;
            if (s[i][j]>='0'&&s[i][j]<='9')
                num[i]++;
        }
    for (int i = 0; i < m; ++i)
        printf("%d\n", num[i]);
    return 0;
}
