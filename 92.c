#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *aptr,*max;
	int n,i;
	printf("enter no:of numbers\n");
	scanf("%d",&n);
	float a[n];
	aptr=a;
	printf("enter the numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",aptr+i);//here already aptr is storing address so do not use & again;
	}
	max=&aptr;
	for(i=0;i<n;i++)
	{
		if( *aptr > * max)
		{
			max = aptr;//here already aptr stroing address again you should not use &
		}
		aptr++;
	}
	printf("bigger number from entered numbers is %f\n",*max);
}
