#include <stdio.h>  
void put_stringn(const char str[], int no)  
{  
    while (no--)  
        puts(str);       
}  
int main(void)  
{  
    char str[100];  
    int n;  
    printf("请输入字符串：");  
    scanf("%s", str); 
    printf("请输入重复次数：");  
    scanf("%d", &n);  
    put_stringn(str, n);   
    return (0);      
}  