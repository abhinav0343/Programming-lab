#include<stdio.h>
 long int factorial(int num);

 int main()
 {
    int n,r;
    long int result;
    printf("enter the values of n and r as follows :: NCR\n");
    printf("enter the value of n and r respectively\n");
    scanf("%d%d",&n,&r);
    if(r>n)
    {
      printf("error:R cannot be greater than N\n");
      return 1;
    }
    result = factorial(n) / (factorial(r)*factorial(n-r));
    printf("the value of NCR is %ld\n",result);
 }
  long int factorial(int num)
 {
     int i;
     long int fact = 1;
    if(num==1||num==0)
    {
      return 1;
    }
    else
    {
      for(i=2;i<=num;i++)
      {
          fact *= i;
      }
    return fact;
    }
 }