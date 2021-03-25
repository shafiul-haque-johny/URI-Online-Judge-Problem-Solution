#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,Maxab,Max;
    scanf("%d %d %d",&a,&b,&c);
    Maxab = ((a+b+abs(a-b))/2);
    Max = ((Maxab+c+abs(Maxab-c))/2);
    printf("%d eh o maior\n",Max);
    return 0;
}
