#include <stdio.h>
void  put_rstring(const char str[])
{
    int i = 0;
    while (str[i])
        i++;
    while (i--)
        putchar(str[i]);
}
int main(void)
{
    char str[100];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("输入字符串的逆向是：");
    put_rstring(str);
    putchar('\n');
    return 0;
}
