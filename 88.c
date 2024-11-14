#include<stdio.h>
#include<string.h>
int main()
{
    int *aptr,*bptr,n,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements in array 1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements in array 1 are :\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\nelements of array 1 are copied to array 2\n");
    aptr=&a[0];
    for(i=0;i<n;i++)
    {
        b[i]=*aptr;
        aptr++;
    }
    printf("elements in array 2 are :\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",b[i]);
    }
}