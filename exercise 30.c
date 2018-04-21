#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char A[11],Da,B[11],Db;
    int sum_A=0,sum_B=0,A2,B2,A3,B3,a=0,b=0,i=0;
    scanf("%d%d%d%d",&A2,&B2,&A3,&B3);
    do{
        A[i]=A2%10+'0';
        A2=A2/10;
        i++;
    }while(A2!=0);
    Da=B2+'0';
    i=0;
    do{
        B[i]=A3%10+'0';
        A3=A3/10;
        i++;
    }while(A3!=0);
    Db=B3+'0';
    for (int i = 0; i < strlen(A); ++i)
        if (A[i]==Da)
            a++;
    for (int i = 0; i < strlen(B); ++i)
        if (B[i]==Db)
            b++;
    for (int i = 0; i < a; ++i)
        sum_A+=B2*pow(10,i);
    for (int i = 0; i < b; ++i)
        sum_B+=B3*pow(10,i);
    printf("%d\n", sum_A+sum_B);
    return 0;
}
