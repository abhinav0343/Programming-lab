#include<stdio.h>
int main()
{
   int arr[5],sum=0,i;
   printf("to find the sum of the numbers\n");
   printf("enter the numbers\n");
   for(i=0;i<5;i++)
   {
   scanf("%d",&arr[i]);
   }
   printf("array numbers are \n");
   for(i=0;i<5;i++)
   {
   printf("%d\n",arr[i]);
   }
   for(i=0;i<5;i++)
   {
   sum = sum + arr[i];
   }
   printf("sum of all the numbers is %d\n",sum);
   return 0;
   }
 