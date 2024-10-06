#include<stdio.h>
int main()
{
  int n,i,k,j;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  int b[n];
  printf("enter the array values\n");
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   printf("\n your array values are::\n");
   
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
   
     printf("enter the rotation value\n");
     scanf("%d",&j);
     k=j;
       
       for(i=0;i<n;i++)
       {
        if(i+j<=n-1)
        {
           b[i+j]=a[i];
        }
       }     
  
  for(i=0;i<j;i++)
  {
     b[i]=a[n-k];
     k--;
  }  
     
     for(i=0;i<n;i++)
     {
       printf("%d\t",b[i]);
     }
     
     return 0;
     
     
}