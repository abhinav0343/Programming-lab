#include<stdio.h>//program to find whether the given  number is an Armstrong number or not
#include<math.h>
int main(){

int n,rem,sum=0,j;

    printf("enter a number :");

    scanf("%d",&n);

int num=n;

int m=n;

for(j=0;m>0;j++)

    {
    m=m/10;
    }

while(n>0){

    rem=n%10;

    sum=sum+pow(rem,j);

    n=n/10;

}

if(num==sum)
    {

    printf("yes, given number is an Armstrong number");

}
else

    {

    printf("no,entered number is not an Armstrong number");

}




return 0;

}
