#include <stdio.h>  
int combination(int n, int r)  
{  
    int c;  
    if (r == 0 || n == r)  
        c = 1;  
    else if (r == 1)  
        c = n;  
    else  
        c = combination(n - 1, r - 1) + combination(n - 1, r);  
    return (c);  
} 
int main(void)  
{  
    int n, r;  
    printf("请输入有几个整数：");    scanf("%d", &n);  
    printf("请输入想取出多少个整数：");    scanf("%d", &r);  
    printf("%d个不同整数取出%d个整数的组合数为%d。\n", n, r, combination(n, r));  
    return (0);      
}   