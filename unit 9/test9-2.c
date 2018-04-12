#include <stdio.h>
int main(void)
{
    char str[] = "ABC";
    str[0] = '\0';
    printf("字符串str为%s\n", str);
    return (0);
}
