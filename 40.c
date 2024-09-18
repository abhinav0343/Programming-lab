#include<stdio.h>
#include<math.h>
int main()
{
int sum=0,n=0;
printf("to read the numebrs untill negative number enters and sum of all read numbers\n");
printf("\nenter the numbers");
do{
sum=sum+n;
scanf("%d",&n);
}while(n >= 0);
printf("\nsum=%d",sum);
return 0;
}