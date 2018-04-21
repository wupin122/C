#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[4];
    gets(a);
    for (int i = 0; i < 3; ++i)
    {
        if(a[i]=='\0')
            break;
        for (int j = 0; j < a[i]-'0'; ++j){
            if (strlen(a)==3+i)
                printf("B");
            if (strlen(a)==2+i)
                printf("S");
        }
    }
    printf("1%s\n",a );
    return 0;
}
