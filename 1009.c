#include<stdio.h>

int main ()
{
    char employee;
    double salary,total_value_sold,total;
    scanf("%s\n%lf\n%lf",&employee,&salary,&total_value_sold);
    total = (salary+(total_value_sold*.15));
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
