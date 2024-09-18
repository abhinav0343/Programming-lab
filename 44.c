#include<stdio.h>
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
charge=100+(0.65*u);
}
else if(u>400&&u<=600)
{
charge=230+(0.8*u);
}
else
{
charge=425+(1.25*u);
}
printf("amount=%f\n",charge);
return 0;
}
