#include<stdio.h>
int main()
{
float rs,commission;
printf("to find the commission for sales\n");
printf("enter the sales value\n");
scanf("%f",&rs);
if(rs<=500)
{
commission = 5*(rs)/(100) ;
}
else if(rs>500 && rs<=2000)
{
commission = 35 + 10*(rs)/(100);
}
else if(rs>2000 && rs<=5000)
{
commission = 185 + 12*(rs)/(100) ;
}
else
{
commission = 12.5*(rs)/(100) ; 
}
printf("commission = %f \n",commission);
return 0; 
}
