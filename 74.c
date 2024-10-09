#include <stdio.h>
int main()
{
int i,n1,n2,j;
printf ("enter the sizes of the two arrays");
scanf("%d %d",&n1,&n2);
int a[n1],b[n2];
printf("\nenter the elements of first array");
for(i=0;i<n1;i++)
{
 scanf("%d",&a[i]);
}
printf("\nenter the elements of second array");
for(i=0;i<n2;i++)
{
 scanf("%d",&b[i]);
}
int c[n1];
for(j=0;j<n1;j++)
{
for(i=j;i<n1;i++)
{
   if(a[j]>=a[i])
   {
   c[i]=a[i];
   a[i]=a[j];
   a[j]=c[i];
   }
   }
   }
int d[n2];
for(j=0;j<n2;j++)
{
for(i=j;i<n2;i++)
{
   if(b[j]>=b[i])
   {
   d[i]=b[i];
   b[i]=b[j];
   b[j]=d[i];
   }
   }
   }
   int comb[n1+n2];
   for(i=0;i<(n1+n2);i++)
   {
   if(i<=n1-1)
   {
   comb[i]=a[i];
   }
   else
   {
   for(j=0;j<n2;j++)
   {
   comb[i]=b[j];
   i++;
   }
   }
   }
int k[n1+n2];
for(j=0;j<(n1+n2);j++)
{
for(i=j;i<(n1+n2);i++)
{
   if(comb[j]>=comb[i])
   {
   k[i]=comb[i];
   comb[i]=comb[j];
   comb[j]=k[i];
   }
   }
   }
   printf("\n the combined array\n");
for(i=0;i<(n1+n2);i++)
{
 printf("%d\t",comb[i]);
}
return 0;
}
   