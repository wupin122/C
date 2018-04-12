#include <stdio.h>
#include <string.h>
#define number 123
#define element 128
void put_strary(const char s[][element],int n)
{
    for(int i=0;i<n;i++){
        if (strcmp(s[i],"$$$$$")==0)
            break;
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
}
int main(void)
{
    int i,n=-1;
    char cs[number][element];
    printf("输入$$$$$字符串可以停止读取操作。\n");
    for (i = 0; i < number; i++) {
        printf("cs[%d]: ", i);
        scanf("%s", cs[i]);
        n++;
        if (strcmp(cs[i],"$$$$$")==0)
            break;
    }
    put_strary(cs,n);
    return (0);
}
