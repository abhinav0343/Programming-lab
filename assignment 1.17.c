#include <stdio.h>//program to read three numbers and print max using logical operators
int main() {
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a,&b,&c);
    if((a-b)>=0 && (a-c)>=0){
        printf("%f is the greatest number ",a);
    }
    else if((a-b)>=0 && (a-c)<=0){
        printf("%f is the greatest number",c);

    }
    else if((a-b)<=0 && (b-c)>=0){
        printf("%f is the greatest number",b);
    }
    else if ((a-b)<=0 && (b-c)<=0){
        printf("5f is the greatest number",c);
    }
    return 0;
    }
