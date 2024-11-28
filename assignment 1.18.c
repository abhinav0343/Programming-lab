#include<stdio.h>//program to read three numbers and print max using conditional operator
int main(){
float a,b,c,d;

    printf("enter three numbers:");

    scanf("%f %f %f",&a,&b,&c);

d=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("maximum number is %f",d);

return 0;

}
