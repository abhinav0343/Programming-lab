#include<stdio.h>
int main(){
  int cm,m,p,c,e;
  printf("to calculate the cutt off marks of a student\n" );
  printf("enter the marks \n");
  scanf("%d%d%d%d",&m,&p,&c,&e);
  cm = m / 2 + p / 2 + c / 2 + e / 2 ;
  printf("%d is your cm",cm);
  return 0;
  }
 to calculate the cutt off marks of a student
enter the marks
10 10 10 10
20 is your cm
[Process completed - press Enter]