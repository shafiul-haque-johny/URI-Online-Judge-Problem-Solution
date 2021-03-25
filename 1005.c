#include <stdio.h>

int main() {

    float A,B,media;
    scanf("%f\n%f",&A,&B);
    media = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",media);

    return 0;
}
