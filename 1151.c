#include<stdio.h>

int main()
{
    int N,i,j,array[100];
    scanf("%d", &N);
    array[0] = 0;
    array[1] = 1;
    for(i=2;i < N;i++)
    {
        array[i] = array[i-2]+array[i-1];
    }
    printf("0");
    for(j = 1;j<N;j++)
    {
        printf(" %d",array[j]);
    }
    printf("\n");
    return 0;
}
