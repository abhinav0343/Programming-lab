#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter number of test cases\n");
	int t;
	scanf("%d",&t);
	char a[t][10];
	printf("enter the test cases\n");
     for(int i=0;i<t;i++)
     {
	   scanf("%s",&a[i]);
     }
     char temp[10];
     for(int i=0;i<t-1;i++)
     {
     	for(int j=0;j<t-1;j++)
     	{
	      if(a[j] < a[j+1])
	      {
	      	temp[10] = a[j];
	      	a[j] = a[j+1];
	      	a[j+1] = temp[10];
		  }
		}
	 }
	for(i=0;i<t;i++)
     {
	   printf("%s",a[i]);
     }
}
