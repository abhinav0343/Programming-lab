#include<stdio.h>
int main()
	{
		int i,j,n;
	printf("to print a pattern\n");
	printf("enter the no:of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}

	return 0;
}
