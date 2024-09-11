#include<stdio.h>
#include <math.h>
int main()
{
           int n,i;
           printf("program to read a num and print factors");
           printf("\nenter the number");
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
           if(n%i==0)
           {
           printf("%d,",i);
           }
           }
           
return 0;
}