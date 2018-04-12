#include <stdio.h>
#include <string.h>
#define number 123  
int main(void)  
{  
    int i;  
    char cs[number][6]; 
    printf("输入$$$$$字符串可以停止读取操作。\n"); 
    for (i = 0; i < number; i++) {  
        printf("cs[%d]: ", i);  
        scanf("%s", cs[i]);  
        if (strcmp(cs[i],"$$$$$")==0)
        	break;
    }
    for (i = 0; i < number; i++)  {
    	if (strcmp(cs[i],"$$$$$")==0)
        	break;
        printf("cs[%d] = \"%s\"\n", i, cs[i]);  
    }
    return (0);  
}  