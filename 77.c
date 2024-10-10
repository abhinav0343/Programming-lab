#include<stdio.h>
#include<stdlib.h>
void palindrome(int,int);
  void main()
  {
    int num,rem,n;
    printf("enter the number\n");
    scanf("%d",&num);
    palindrome(num,rem);
  } 
  void palindrome(int num,int rem)
  {
    int n=num;
    int sum=0;
      while(num!=0)
      {
        rem = num % 10;
        num = num / 10;
        sum = (sum*10)+rem;
      }
        if(sum==n)
        {
          printf("%d is palindrome",n);
        }
        else if(sum!=n)
        {
         printf("%d is not palindrome\n",n);
        }
  }     