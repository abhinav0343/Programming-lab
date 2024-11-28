#include<stdio.h>//program to find factorial of a given number
int main(){
int n;//fact is factorial of a number

    printf("enter a number:");

    scanf("%d",&n);

int fact=1,i;

for(i=1;i<=n;i++){

    fact=fact*i;

}

    printf("factorial of entered number is %d",fact);

return 0;

}
