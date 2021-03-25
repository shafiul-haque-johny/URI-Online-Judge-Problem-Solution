#include<stdio.h>

int main()
{
    int X,N[100];
    double Y;
    scanf("%lf",&Y);
    for(X = 0;X < 100;X++)
    {
        printf("N[%d] = %.4lf\n",X,Y);
        (Y /= 2) ;
    }
    return 0;
}
