#include <stdio.h>

int main() {
  float basic_salary,gross_salary,hra,da;
  printf("enter the basic_salary");
  scanf("%f",&basic_salary);
  hra = 0.20*basic_salary;
  da = 0.50*basic_salary;
  gross_salary = basic_salary+hra+da;
  printf("gross_salary:%.2f",gross_salary);
  return 0;
}
enter the basic_salary10000
gross_salary:17000.00
[Process completed - press Enter]