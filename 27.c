#include<stdio.h>//program to know whether the given number is prime or not
int main(){
int n,x=1;
printf("enter a number :");
scanf("%d",&n);
int i;
for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
       x++;
    }

}
if(x==1){
    printf("entered number is a prime number");
}
else{
        printf("entered number is not a prime number");
}

return 0;

}
