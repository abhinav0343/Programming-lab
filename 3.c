#include <stdio.h>//program to calculate gross salary
 int main(){
int A,B,C;//A is basic allowance,B is HRA,C is other allowances,GS is gross salary

    printf("enter A:");

    scanf("%d",&A);

    printf("enter B:");

    scanf("%d",&B);

    printf("enter C:");

    scanf("%d",&C);

 int GS=A+B+C;

    printf("GS is %d",GS);

 return 0;

 }
