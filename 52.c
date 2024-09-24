#include<stdio.h>
int main()
{
int n,i,j,s,k;
printf("enter the number of rows\n");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(s=1;s<=(n-i);s++)
    {
      printf(" ");
    }
         for(j=1;j<=i;j++)
         {
           printf("%d",j); 
         }
           for(k=i-1;k>=1;k--)
           {
             printf("%d",k);
           }
      printf("\n");
  }
 return 0;
 }