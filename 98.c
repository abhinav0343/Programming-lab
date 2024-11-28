#include <stdio.h>
int main()
{
    int i,j,k;
    int *a[3][3],*b[3][3],*c[3][3];
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    a[i][j]=(int*)malloc(3*sizeof(int));
      b[i][j]=(int*)malloc(3*sizeof(int));
      c[i][j]=(int*)malloc(3*sizeof(int));
    }
    }
    printf("enter elements of a matrix");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    scanf("%d",&(*a[i][j]));
    }
    }
    printf("enter elements of b matrix");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    scanf("%d",&(*b[i][j]));
    }
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    *c[i][j]=0;
      for(k=0;k<3;k++)
      {
      *c[i][j]+=(*a[i][k])*(*b[k][j]);
      }
    }
    }
    printf("the multiplication of two matrices is\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d\t",*c[i][j]);
    }
    printf("\n");
    }
    return 0;
}
