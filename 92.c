#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int n,*aptr,i,max;
	printf("enter the no:of numbers\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	aptr=&a;
	max=*aptr;
	{
		if(*aptr>max)
		{
			max=*aptr;
		}
		aptr++;
	}
	printf("maximum number is %d\n",max);
}
