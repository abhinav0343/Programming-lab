#include <stdio.h>//Program to calculate simple interest
 int main(){
float P,R,T;//P is principal,R is rate of interest,T is time

    printf("enter P:");

    scanf("%f",&P);

    printf("enter R:");

    scanf("%f",&R);

    printf("enter T:");

    scanf("%f",&T);

float Interest=(P*R*T)/100;

    printf("Interest is %f",Interest);

return 0;
 }
