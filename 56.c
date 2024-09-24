#include<stdio.h>
int main()
{
   int i,pos=0,neg=0,arr[10],zer=0;
   printf("to count no:of postive,negative and zero elemets\n");
   printf("enter the numbers\n");
   for(i=0;i<10;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0;i<10;i++)
   {
      if(arr[i] > 0)
      {
      pos = pos + 1;
      }
      else if(arr[i] < 0)
      {
      neg = neg + 1;
      }
      else
      {
      zer = zer + 1;
      }
   }
   printf("no:of positive numbers are %d\n",pos);
   printf("no:of negative numbers are %d\n",neg);
      printf("no:of zero numbers are %d\n",zer);
   return 0;
   }