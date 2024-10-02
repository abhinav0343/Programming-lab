#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("\nenter the array elements\n");
for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
 }
   printf("\n array elements are:\n");
     for(i=1;i<=n;i++)
     {
       printf("%d\t",a[i]);
     } 
     printf("\nenter the search element\n");
     scanf("%d",&j);
       for(i=1;i<=n;i++)
       {
         if(a[i]==j)
         {
         printf("entered element is at position %d & element is %d\n",i,j);
         }
         else
         {
         printf(" entered element %d is not at position %d\n",j,i);
         }
       }
       
}         