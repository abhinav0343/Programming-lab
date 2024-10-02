#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n\n");
scanf("%d",&n);
int a[n];
printf("enter the array values\n");
for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 
 printf("array elements are \n");
 
   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   }
   
   printf(" the reverse array elements are \n");
   
     for(i=(n-1);i>=0;i--)
     {
       printf("%d \t",a[i]);
     }
      
  }    
   
 