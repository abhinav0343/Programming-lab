#include<stdio.h>
int main()
{
   int arr1[10],arr2[10],arr3[10],i;
   printf("to print the swap of two arrays \n");
   printf("enter the values of array 1\n");
   for(i=0;i<10;i++)
   {
   scanf("%d",&arr1[i]);
   }
   printf("enter the values of array 2\n");
   for(i=0;i<10;i++)
   {
   scanf("%d",&arr2[i]);
   }
   for(i=0;i<10;i++)
   {
   arr3[i] = arr1[i];
   arr1[i] = arr2[i];
   printf("values of arr1 at index %d are %d\n",i,arr1[i]);
   }
   for(i=0;i<10;i++)
   {
   arr2[i] = arr3[i];
   printf("values of arr2 at index %d are %d\n",i,arr2[i]);
   }
   return 0;
   }
   