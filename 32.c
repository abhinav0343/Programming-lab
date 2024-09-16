#include<stdio.h>
int main()
{
int n,i,j,k,s_max=0,max=0;
printf("\nenter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&k);
j = k;
if(j>max)
{
s_max = max;
max = j;
}
else if(j<max)
{
if(j>s_max)
{
s_max = j;
}
}
}
printf("\nmax=%d",max);
printf("\ns_max=%d",s_max);

return 0;
}
