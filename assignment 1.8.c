#include<stdio.h>//program to convert the time period of revolution of earth into hours days minutes
int main(){
float T=31558150;//M is minutes,H is hours,D is days

float M=T/60;

    printf("M is %f \n",M);

float H=T/3600;

    printf("H is %f \n",H);

float D=T/86500;

    printf("D is %f \n",D);

return 0;

}
