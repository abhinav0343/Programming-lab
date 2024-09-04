#include<stdio.h>
int main (){
  int a,b,c,max;
  printf("TO FIND MAXIMUM OF THREE NUMBERS\n");
  printf("enter the numbers \n");
  scanf("%d%d%d",&a,&b,&c );
  if((a>=b)&&(b>=c))
  max = a;
  else if ((b>=a)&&(b>=c))
  max = b;
  else
  max = c;
  printf("the maximum of three numbers is %d\n",max);
  return 0;
  }
  TO FIND MAXIMUM OF THREE NUMBERS
enter the numbers
1 2 3
the maximum of three numbers is 3

[Process completed - press Enter]