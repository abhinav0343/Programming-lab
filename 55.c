
#include<stdio.h>
int main()
{
   int i,even=0,odd=0,n;
   printf("enter the size of array\n");
   scanf("%d",&n);
   int arr[n];
   printf("to count no:of  even and odd numebrs\n");
   printf("enter the numbers\n");
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(arr[i] % 2 == 0)
      {
      even++;
      }
      else
      {
      odd++;
      }
   }
   printf("no:of even numbers are %d\n",even);
   printf("no:of odd numbers are %d\n",odd);
   return 0;
}
