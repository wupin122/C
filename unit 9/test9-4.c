#include <stdio.h>   
void null_string(char s[])  
{  
    s[0] = '\0';  
}  
int main(void)  
{  
    char s[100];  
    printf("请输入字符串：");  
    scanf("%s", s);  
    printf("字符串是：%s\n", s);  
    null_string(s);  
    printf("转换为空字符串后：%s\n", s);  
    return (0);   
}  