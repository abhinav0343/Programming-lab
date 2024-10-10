#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,k;
  printf("enter the num\n");
  scanf("%d",&num);
  division (num,k);
}
   int division(int num,int k)
   {
   k = num % 2;  
   if(k==0)
   {
   printf("number is even\n");
   }
   else if(k!=0)
   {
   printf("number is odd\n");
   }
}   