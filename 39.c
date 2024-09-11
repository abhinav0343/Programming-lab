#include<stdio.h>
#include <math.h>
int main()
{
           int i,n;
           float k=0,fact=1;
          printf("program to print 1/1!+2/2!+3/3!+.......");
          printf("\nenter the number");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
          printf("%d/%d!+",i,i);
          fact=fact*i;
          k=k+(i/fact);
          }
          printf("=%f",k);
return 0;
}