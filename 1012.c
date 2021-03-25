#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,p1,p2,p3,p4,p5,PI = 3.14159;
    scanf("%lf %lf %lf\n",&A,&B,&C);
    p1 = ((1.0/2)*(A*C));
    p2 = PI*(C*C);
    p3 = (((A+B)/2)*C);
    p4 = (B*B);
    p5 = (A*B);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",p1,p2,p3,p4,p5);
    return 0;
}
