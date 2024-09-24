#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number of rows");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==j)
      {
       printf("1");
      }
      else if(i<j || i>j)
      {
      printf("0");
      }
    }
    printf("\n");
  }
return 0;
}
