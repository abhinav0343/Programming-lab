#include<stdio.h> 
int main(){
char operator;
double num1,num2,result;
printf("enter the operator ( +,-,*,/):\n");
scanf("%c",&operator);
printf("enter two numbers\n");
scanf("%lf%lf",&num1,&num2);
switch ( operator) {
case '+' :
result = num1 + num2 ;
printf("%lf + %lf=%lf\n",num1,num2,result);
break;
case '-' :
result = num1 - num2;
printf("%lf - %lf=%lf\n",num1,num2,result);
break;
case '*' :
result = num1*num2;
printf("%lf * %lf=%lf\n",num1,num2,result);
break;
case '/' : 
if (num2 != 0 ){
result = num1/num2;
printf("%lf/%lf = %f\n",num1,num2,result);
break;}
else {
printf("syntax error");
break;
}
default :
printf("syntax error");
break;
}
return 0;
}
   enter the operator ( +,-,*,/):
/
enter two numbers
8 2
8.000000/2.000000 = 4.000000

[Process completed - press Enter]