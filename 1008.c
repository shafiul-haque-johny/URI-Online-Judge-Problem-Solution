#include <stdio.h>

int main() {

  int number, work_hours ;
  float amount, Salary ;
  scanf("%d\n%d\n%f", &number, &work_hours, &amount);
  Salary = (work_hours*amount) ;
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", Salary);
  return 0;
}
