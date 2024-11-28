#include<stdio.h>//program to find cut off score
int main(){
float M,P,C,E;//M is marks in maths,P is marks in physics,C is marks in chemistry,E is marks in entrance exam

    printf("enter M(0-200):");

    scanf("%f",&M);

    printf("enter P(0-200):");

    scanf("%f",&P);

    printf("enter C(0-200):");

    scanf("%f",&C);

    printf("enter E(0-100):");

    scanf("%f",&E);

float S=(M/2)+(P/2)+(C/2)+(E);

    printf("cut of score is %f",S);

return 0;

}
