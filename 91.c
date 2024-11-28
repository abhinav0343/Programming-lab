#include<stdio.h>
int main()
{

int n,*ptr;
printf("enter the number");
scanf("%d",&n);
ptr=&n;
printf("the square of the number is %d",(*ptr)*(*ptr));
printf("\nthe cube of number is %d",(*ptr)*(*ptr)*(*ptr));
return 0;

}
