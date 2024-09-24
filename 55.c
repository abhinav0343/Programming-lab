#include<stdio.h>
int main()
{
   int i,even=0,odd=0,arr[10];
   printf("to count no:of  even and odd numebrs\n");
   printf("enter the numbers\n");
   for(i=0;i<10;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0;i<10;i++)
   {
      if(arr[i] % 2 == 0)
      {
      even=even+1;
      }
      else
      {
      odd=odd+1;
      }
   }
   printf("no:of even numbers are %d\n",even);
   printf("no:of odd numbers are %d\n",odd);
   return 0;
   }