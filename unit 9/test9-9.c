#include <stdio.h>
void rev_string(char str[])
{  
    int n = 0;
    char t;
    while (str[n])
        n++;
    for (int i = 0; i < n / 2; i++) {
        t = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = t;
    }
}
int main(void)
{
    char str[100];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("字符串最开始的顺序是：%s\n", str);
    rev_string(str);
    printf("字符串现在的顺序是：%s\n", str);
    return (0);
}
