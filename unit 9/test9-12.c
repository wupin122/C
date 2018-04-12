#include <stdio.h>
#define number 3
void rev_string(char str[][128],int m)
{  
    for (int j = 0; j < m; ++j)
    {
        int n = 0;
        char t;
        while (str[j][n])
            n++;
        for (int i = 0; i < n / 2; i++) {
            t = str[j][i];
            str[j][i] = str[j][n-1-i];
            str[j][n-1-i] = t;
        }
    }
}
int main(void)
{
    char str[number][128];
    for (int i = 0; i < number; ++i)
    {
        printf("str[%d]：",i);
        scanf("%s", str[i]);
    }
    printf("字符串最开始为{");
    for (int i = 0; i < number; ++i)
    {
        if(i!=(number-1))
            printf("\"%s\", ", str[i]);
        else
            printf("\"%s\"}\n", str[i]);
    }
    rev_string(str,number);
    printf("字符串更新为{");
    for (int i = 0; i < number; ++i)
    {
        if(i!=(number-1))
            printf("\"%s\", ", str[i]);
        else
            printf("\"%s\"}\n", str[i]);
    }
    return (0);
}
