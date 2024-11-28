#include <stdio.h>//program to convert time in seconds to days hours and minutes
int main(){
int S;//S is seconds,D is days,M is minutes,H is hours

    printf("enter S:");

    scanf("%d",&S);

float M=S/60;

    printf("M is %f \n",M);

float H=M/60;

    printf("H is %f \n",H);

float D=H/24;

    printf("D is %f \n",D);

return 0;

}


