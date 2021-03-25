#include <stdio.h>

int main() {

    float A,B,C,media;
    scanf("%f\n%f\n%f",&A,&B,&C);
    media = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n",media);

    return 0;
}
