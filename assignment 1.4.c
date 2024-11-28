#include <stdio.h>//program to convert temperature from fahrenheit to centigrade
int main(){
float F;//C is temp in centigrade,F is temp in fahrenheit

    printf("enter F:");

    scanf("f%",&F);

 float C=(F-32)*(5/9);

    printf("C is %f",C);

return 0;

 }
