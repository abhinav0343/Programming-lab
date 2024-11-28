#include<stdio.h>//program to find whether entered number is a palindrome or not
int main(){
int n;

    printf("enter a number :");

    scanf("%d",&n);

int num=n,sum=0,rem;

while(n>0){

    rem=n%10;

    sum=sum*10+rem;

    n=n/10;

}

if(num==sum){

    printf("entered number is a palindrome");

}

else{

    printf("entered number is not a palindrome");

}

return 0;

}

