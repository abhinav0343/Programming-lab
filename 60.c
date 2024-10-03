#include<stdio.h>
int main()
{
  int i,n,j,min,k,temp;
  printf("\nto print selection sort of numbers");
  printf("\nenter the array size\n");
  scanf("%d",&n);
  int a[n];
  int b[n];
  printf("\nenter tha array values\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  printf("\nyour array values are:\n");
    for( i=0;i<n;i++)
    {
     printf("%d\n",a[i]);
    }
      
      for(i=0;i<(n-1);i++)
      {
         k=i;
          
             
            for (j=i+1;j<n;j++)
            {
              if(a[j]<a[k])
              {
              k=j;
              }
            } 
              if(k!=i)
              {
               temp=a[i];
               a[i]=a[k];
               a[k]=temp; 
              }
            
      }   
      printf("sorted array\n");
      
      for(i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      } 
      }  