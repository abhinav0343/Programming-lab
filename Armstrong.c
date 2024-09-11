#include<stdio.h>
int main(){
int num,result=0,mul=1,cnt,count=0,q,rem;
printf("enter the number");
scanf("%d",&num);
q=num;
while(q!=0){
q=q/10;
count++;
}
cnt=count;
result=0;
mul = 1;
q=num;
while(q!=0){
rem = q%10;
while(count!=0){
mul = mul*rem;
count--;
}
result= result+mul;
q=q/10;
cnt=count;
mul=1;}
if(q=num)
{
printf("armstrongnumber ");
}
else{
printf("not");
}
return 0;
}