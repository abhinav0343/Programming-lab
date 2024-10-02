#include<stdio.h>
int main()
{
int n,i,j,k,flag;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("\nenter the array elements\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf(" array elements are\n");

   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   }
   printf("enter the occurrence search element\n");
   scanf("%d",&k);
      flag=0;
       // flag=0;
        for(i=0;i<n;i++)
         {
           if(k==a[i])
           {
          flag = flag + 1;
           }
         }
        
         printf("the occurence of element  %d is equal to  %d \n",k,flag);
      
     
 }    