#include<stdio.h>
int main()
{
int x,y,n;
printf("ENTER THE VALUES OF x AND n\n");
scanf("%d%d",&x,&n);
if(n == 1){
y = 1 + x ;
printf("%d",y);
}
if(n == 2 ) {
y = 1 + (x/n);
printf("%d",y);
}
if( n == 3 ) {
y = 1 + pow(x,n);
printf("%d",y);
}
if (n < 1 || n > 3){
y = 1 + n*x;
printf("%d",y);}
return 0 ;
}
