#include<stdio.h>
#include<math.h>

int main()
{
    int p1_code,p2_code,p1_num,p2_num;
    float p1_price,p2_price,p1_paid,p2_paid,all_paid;
    scanf("%d %d %f\n",&p1_code,&p1_num,&p1_price);
    scanf("%d %d %f\n",&p2_code,&p2_num,&p2_price);
    p1_paid = p1_num*p1_price;
    p2_paid = p2_num*p2_price;
    all_paid = p1_paid + p2_paid;
    printf("VALOR A PAGAR: R$ %.2f\n",all_paid);
    return 0;
}
