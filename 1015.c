#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main ()
{
    float x1,y1,x2,y2,d;
    scanf("%f %f\n", &x1, &y1);
    scanf("%f %f\n", &x2, &y2);
    d =  ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("%.4f\n",sqrt(d));
    //getchar();
    //printf("\n");
    return 0;
}
