#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
	    for(j=1;j<=2*(n-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ",j);
		}
		printf("\n");
     if(i>n-1)
     {
     break;
     }
	}
	for(i=n-1;i>0;i--)
       {
         for(j=1;j<=2*(n-i);j++)
	           {
	               printf(" ");
	           }
	        for(j=1;j<=2*i-1;j++)
	        {
	            printf("* ");
	        }
	        printf("\n");
	   }
	return 0;
}    