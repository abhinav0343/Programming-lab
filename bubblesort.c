#include<stdio.h>
int main()
{
    printf("program to perform bubble sort\n");
    int i,j,n;
    printf("enter no:of values\n");
    scanf("%d",&n);
    int a[n];
    printf("enter values of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sorting the array.....\n");
    int temp,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {            
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf("after sorting the array\n");
    printf("your array is\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }  

}