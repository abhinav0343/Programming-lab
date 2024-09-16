#include<stdio.h>
int main(){
int n,num,sum=0,r;
printf("TO FIND THE NUMBER IS PALINDROME OR NOT");
printf("enter the number");
scanf("%d",&num);
n=num;
while(n!=0)
{
r = n%10;
sum = (sum*10)+r;
n = n/10;
}
if(sum==num)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
