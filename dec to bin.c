#include<stdio.h>
int main(){
int i=0,j=0,k;
do
{
i++;
   do{
        j++;
        k=i*j;
        printf("%d ",k);
     }while(j<10);
     j=0;
     printf("\n");
}while(i<10);
return 0;
}