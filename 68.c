#include<stdio.h>
int main()
{
int a[3][3],i,j,b[3][2],c[3][2],k,sum;
printf("entet the matrix elements of A\n");
for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
 }
 printf("\nthe matrix A is\n");
   for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
 }
 printf("\nenter the matrix elements of B\n");
 for(i=0;i<3;i++)
 { 
   for(j=0;j<2;j++)
    {
      scanf("%d",&b[i][j]);
    }
 }
 printf("\nthe matrix B is\n");
   for(i=0;i<3;i++)
 { 
   for(j=0;j<2;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
 }
 printf("\nmultiplication of the two matrices are\n");
 for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
     {
     sum=0;
       for(k=0;k<3;k++)
        {
          sum = sum + a[i][k]*b[k][j];
          c[i][j] = sum;
        }
          printf("%d\t",c[i][j]);
        
     }
        printf("\n");
  } 
  } 
