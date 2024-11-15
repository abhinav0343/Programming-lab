#include<stdio.h>
#include<stdlib.h>
struct item
{
	int num;
	float price;
	char name[50];//here we should not use pointer
};  // after flower bracket we should keep semi column according to syntax
int main()
{
	int n;
	printf("enter no:of products\n");
	scanf("%d",&n);
	struct item product[n],*aptr;
	printf("Enter input in the order of \n");
	printf("1.NAME OF THE PRODUCT\n");
	printf("2.ENTER SERIAL NUMBER \n");
	printf("3.PRICE OF THE PRODUCT\n");
	printf("instead of space type _ to avoid getting errors\n");
	for(aptr=product;aptr<product+n;aptr++)//assining address of the initial product to aptr
	{
		scanf("%s %d %f",&aptr->name,&aptr->num,&aptr->price);//Since name,num,price is not a pointer to dynamically allocated memory
		// but rather an array, the correct way to access it is aptr->name instead of aptr.name.
		printf("\n");
	}
	printf("OUTPUT\n");
	for(aptr=product;aptr<product+n;aptr++)
	{
		printf("NAME OF THE PRODUCT : %s \n",aptr->name);
		printf("NUMBER OF THE PRODUCT : %d \n",aptr->num);
		printf("PRICE OF THE PRODUCT : %f \n",aptr->price);
		printf("\n=========================\n");
	}
}
