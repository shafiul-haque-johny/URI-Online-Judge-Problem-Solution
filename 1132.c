#include<stdio.h>
 int main()
 {
     int X,Y,i,sum1=0,sum2=0;
     scanf("%d\n%d",&X,&Y);
     if (X>Y)
     {
         for(i = Y;i <= X;i++)
         {
             if(i%13 != 0)
             {
                 sum1 += i;
             }
         }
         printf("%d\n",sum1);
     }
     else if (X<Y)
     {
         for(i = X;i <= Y;i++)
         {
             if(i%13 != 0)
             {
                 sum2 += i;
             }
         }
         printf("%d\n",sum2);
     }
     return 0;
 }
