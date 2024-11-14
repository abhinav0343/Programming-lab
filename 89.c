#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,*aptr;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements of array 1:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    aptr=&a[0];
    printf("elements in array 1 are :\n");
     for(i=0;i<n;i++)
     {
      printf("%d\t",a[i]);
     }
    printf("\ncopying elements of array 1 in to another array in reverse order\n");
    for(i=n;i>0;i--)
    {
        b[i]=*aptr;
        aptr++;
    }
    printf("elements of array 2 are :\n");
     for(i=1;i<=n;i++)
     {
      printf("%d\t",b[i]);
     }
}