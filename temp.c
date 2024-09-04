#include<stdio.h>
int main () {
  float celsius,farenheit ;
  printf("enter the temperature in farenheit");
  scanf("%f",&farenheit);
  
  celsius = ( farenheit - 32 ) * 5 / 9 ;
  printf("%f farenheit is equal to %f celsius",farenheit,celsius);
  return 0;
  }
enter the temperature in farenheit  64
64.000000 farenheit is equal to 17.777779 celsius
[Process completed - press Enter]