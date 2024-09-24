#include<stdio.h>
int main()
{
   int i,max,secmax,n;
   printf("enter the size of array\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter the array values\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(i == 1)
      {
      max = secmax = arr[i];
      }
      if(arr[i] > max )
      {
      secmax = max;
      max = arr[i];
      }
      else if(arr[i] > secmax)
      {
      secmax=arr[i];
      }
   }
   printf("%d is max \n",max);
   printf("%d is secmax\n",secmax);
   return 0;
}