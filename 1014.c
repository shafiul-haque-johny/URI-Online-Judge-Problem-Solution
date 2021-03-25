#include<stdio.h>

int main()
{
    int X;
    float Y,a_consumption;
    scanf("%d\n%f",&X,&Y);
    a_consumption = (X/Y);
    printf("%.3f km/l\n",a_consumption);
    return 0;

}
