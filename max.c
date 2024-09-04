#include<stdio.h>
int main () {
  int a,b,c,max  ;
  printf("TO FIND MAXIMUM OF THREE NUMBERS\n ");
  printf("Enter the numbers ");
  scanf("%d%d%d",&a,&b,&c);
 max =(a>b)?(a>c?a:c):(b>c?b:c);
 printf("%d is your max",max);
 return 0;
 }
TO FIND MAXIMUM OF THREE NUMBERS
 Enter the numbers 1 2 3
3 is your max
[Process completed - press Enter]