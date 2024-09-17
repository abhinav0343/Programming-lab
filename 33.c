#include<stdio.h>
int main()
{
int n,i,num,k,a,max,min;
printf("\nto find max and min ");
printf("\nenter the no:of numbers");
scanf("%d",&n);
printf("enter the numbers\n");
scanf("%d",&a);
max=min=a;
for(i=1;i<n;i++)
{
scanf("%d",&a);
k=a;
if(k>=max)
{
max=k;
}
else if(k<=min)
{
min=k;
}
}
printf("\nmax=%d",max);
printf("\nmin=%d",min);
return 0;
}
