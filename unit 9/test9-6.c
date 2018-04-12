#include <stdio.h>
int str_chnum(const char s[],char ch)
{
    int i=0,num=0;
    while(s[i])
        if(ch==s[i++])
            num++;
    return num;
}
int main(int argc, char const *argv[])
{
    char ch,s[128];
    printf("请输入字符串：");
    scanf("%s",s);
    printf("请输入要查找的字符：");
    scanf("%s",&ch);
    str_chnum(s,ch);
    printf("字符串%s中字符%c的个数为%d\n", s,ch,str_chnum(s,ch));
    return 0;
}
