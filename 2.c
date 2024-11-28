#include <stdio.h>//program to calculate marks and percentage of a student in five subjects
 int main (){
 float a,b,c,d,e;//a is maths,b is english,c is science,d is social science,e is hindi
 //marks should lie between (0-100)

    printf("enter a:");

    scanf("%f",&a);

    printf("enter b:");

    scanf("%f",&b);

    printf("enter c:");

    scanf("%f",&c);

    printf("enter d:");

    scanf("%f",&d);

    printf("enter e:");

    scanf("%f",&e);

 float marks=a+b+c+d+e;

    printf("marks is %f \n",marks);

float percentage=marks*100/500;

    printf("percentage is %f",percentage);

    return 0;

 }

