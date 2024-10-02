#include<stdio.h>
int main()
{
int i,j,n,m,max,min;
printf("enter the number of rows & columns\n");
scanf("%d%d",&n,&m);
int arr[n][m];
printf("\nenter the array elements\n");
for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
    {
      scanf("%d",&arr[i][j]);
    }
 }    
  
  printf(" your array elements are \n");
  
for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
 }
 
 for(i=0;i<n;i++)
 {
 max = min = 0;
   for(j=0;j<m;j++)
    {
      
      if(arr[i][j]>=max)
      {
      max=arr[i][j];
      }
        else if(arr[i][j]<=min)
        {
         min=arr[i][j];
        }
    }    
 }
 printf("maximum of array elements is %d\n",max);
 printf("minimum of array elements is %d\n",min);
}                    