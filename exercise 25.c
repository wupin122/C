#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double R1,P1,R2,P2,A,B;
    scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
    A=R1*R2*(cos(P1)*cos(P2)-sin(P1)*sin(P2));
    B=R1*R2*(cos(P1)*sin(P2)+cos(P2)*sin(P1));
    if(B>0)
        printf("%.2f+%.2fi\n", A,B);
    else if(B<0)
        printf("%.2f-%.2fi\n", A,fabs(B));
    else
        printf("%.2f\n", A);
    return 0;
}
