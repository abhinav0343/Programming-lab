#include <stdio.h>
#include <string.h>
struct item
{
    char item_name[100];
    int quantity;
    float price;
}i1;

int main()
{
 float e;
 printf("enter item name:");
 scanf("%s",&i1.item_name);
 printf("enter quantity:" );
 scanf("%d",&i1.quantity);
 printf("enter price:");
 scanf("%f",&i1.price);
e=i1.quantity*i1.price;
 printf("item name:%s\n",i1.item_name);
 printf(" quantity:%d\n",i1.quantity);
 printf(" price:%f\n",i1.price);
 printf("amount=%f",e);
return 0;
}
