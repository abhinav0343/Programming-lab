#include<stdio.h>
int main (){
  int a,b ;
  a = 5 ;
  b = 7 ;
  printf("before swaping the numbers\n ");
  printf("a = %d , b = %d" , a , b);
  a =  a + b ;
   b = a - b;
   a = a - b ;
  printf("after swapping\n");
  printf(" a = % d , b = % d ", a , b );
  return 0 ; 
  }
 before swaping the numbers
 a = 5 , b = 7after swapping
 a =  7 , b =  5
[Process completed - press Enter]