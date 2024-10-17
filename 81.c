#include<stdio.h>
#include<stdlib.h>
 int prime(int);
  void main()
  {
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    prime(a);
  }
  
 int  prime(int a)
 {
    if(a<=1)
    {
      return 0;
    }
     for(int i=2;i*i<=a;i++)
     {
       if(a % i == 0)
       {
         return 0;
       }
     }
     return 1;
   }
     
