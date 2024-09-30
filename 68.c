#include<stdio.h>
int main()
{
int a[3][3],i,j,b[3][3],c[3][3];
printf("entet the matrix elements of A\n");
for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
 }
 printf("the matrix A is\n");
   for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
 }
 printf("enter the matrix elements of B\n");
 for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
    }
 }
 printf("the matrix B is\n");
   for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
 }
 printf("multiplication of a and b matices are\n");
  for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      c[i][j] = a[i][j] * b[i][j];
      printf("%d\t",c[i][j]);
    }
    printf("\n");
 }
 }