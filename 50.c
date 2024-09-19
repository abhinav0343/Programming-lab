#include<stdio.h>
int main()
{
	int i,j,n;
	printf("to print a pattern\n");
	printf("enter the no:of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
		 printf("%c",'A'+i);
		}
		printf("\n");
	}
	return 0;
}
