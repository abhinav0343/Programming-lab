#include<stdio.h>//program to read time in hrs min and sec and convert it into total seconds
 int main(){
int h,m,s;//h is hours,m is minutes,s is seconds,t is total seconds

    printf("enter h(1-23):");

    scanf("%d",&h);

    printf("enter m(0-59):");

    scanf("%d",&m);

    printf("enter s(0-59):");

    scanf("%d",&s);

int t=(h*3600)+(m*60)+(s*1);

    printf("total seconds is %d",t);

return 0;

}




















