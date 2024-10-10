#include<stdio.h>
#include<stdlib.h>
 void fibonnaic(int,int);
  void main()
  {
    int a,b,n;
    fibonnaic(a,b);
  }
  
 void  fibonnaic(int a,int b)
 {
    a=0;
    b=1;
    int n;
    printf("enter the no:of numebrs\n");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
  
   int c,i;
     for(i=0;i<n;i++)
     {
       c=a+b;
       a=b;
       b=c;
       printf("%d\n",c);
     }
 }
  
