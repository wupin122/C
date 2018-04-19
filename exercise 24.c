#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[100];
    int a[10]={0},sum=0,q=0;
    gets(s);
    for (int i = 0; i < strlen(s); ++i)
        if (s[i]>='0'&&s[i]<='9')
            a[s[i]-'0']++;
    for (int i = 0; i < 10; ++i)
        sum+=a[i]*i;
    for (int i = 0; sum!=0; ++i)
    {
        a[i]=sum%10;
        sum/=10;
        q++;
    }
    for(int i=0;i<q;i++){
        switch (a[i]){
            case 1:printf("yi");
                break;
            case 2: printf("er");
                break;
            case 3: printf("san");
                break;
            case 4: printf("si");
                break;
            case 5: printf("wu");
                break;
            case 6: printf("liu");
                break;
            case 7: printf("qi");
                break;
            case 8: printf("ba");
                break;
            case 9: printf("jiu");
                break;
            case 0: printf("ling");
                break;
        }
        if (i<q-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
