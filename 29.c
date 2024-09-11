#include<stdio.h>
#include <math.h>
int main()
{
           int i,N,sum=0,num,j,k=0,m,t;
          printf("program to checck the num is palindrome or not");
          printf("\nenter the number N");
          scanf("%d",&N);
          num=N;
          m=N;
          while(num>0)
          {
          num=num/10;
          k++;
          }
          t=k;
          for(j=t;m>0;j--)
          {
          i=m%10;
          sum=sum+i*pow(10,j-1);
          m=m/10;
          }
          if(sum==N)
          {
          printf("palindrome");
          }
          else
          {
          printf("not palindrome");
          }
          
return 0;
}