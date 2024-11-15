#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i;
	printf("enter no:of cities\n");
	scanf("%d",&n);
	//this is two dimensional array so we should use **char not  *char 
	char **city = (char **)malloc(n * sizeof(char *));//here assining something to pointers so in size we should mention *
	printf("enter the name of cities\n");
	for(i=0;i<n;i++)
	{
		city[i]=(char *)malloc(100 * sizeof(char));//here we are assining something to just char so no need of using * in size of
		scanf("%s",city[i]);//already city[i] is holding address so we should not use & here
    }
	printf("name of the cities are \n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",city[i]);
	}
    for(i=0;i<n;i++)
    {
    	free(city[i]);
	}
}
