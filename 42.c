
#include<stdio.h>
#include<math.h>
int main ()
{
int i,num,x=1;
printf("enter the number\n");
scanf("%d",&num);
for(i = 2;i <= num; i++)
{
if( num%i == 0)
{
x++;
}
}
if ( x == 2 ){
printf( "prime number");
}
if( x > 2 )
{
printf("composite number");
}

return 0;
}