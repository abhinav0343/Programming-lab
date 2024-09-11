#include<stdio.h>
int main ()
{
int num,q;
printf("number");
scanf("%d",&num);
while(q != 0)
{
q = num%10;
printf("%d",q);
num = num / 10;
q = num % 10;
printf("%d",q);
q = num / 10;
printf("%d",q);
break ;
}
return 0;
}