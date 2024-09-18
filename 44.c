#include<stdio.h>
#include<math.h>
int main()
{
float u,charge,amount;
printf("\nto print the electric distribution charges");
printf("\nenter the units");
scanf("%f",&u);
if(u<=200)
{
charge=0.5*u;
}
else if(u>200&&u<=400)
{
charge=100+(0.65*(u-200));
}
else if(u>400&&u<=600)
{
charge=230+(0.8*(u-400));
}
else
{
charge=425+(1.25*(u-600));
}
printf("amount=%f\n",charge);
return 0;
}
