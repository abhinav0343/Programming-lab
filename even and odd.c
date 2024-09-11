#include<stdio.h>
int main() 
{
int i,n;
int s_even =0,s_odd =0;
printf("CAN U PLEASE ENTER THE VALUE OF n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (i % 2 == 0)
{
s_even +=i;
}
else
{
s_odd +=i;
}
}
printf("sum of all even numbers %d\n",s_even);
printf("sum of all odd numbers %d\n",s_odd);

return 0;
}

