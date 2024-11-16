#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,length,flag;
	printf("CHECKING THE TWO STRINGS ANAGRAMS OR NOT\n");
	char str1[100],str2[100];
	printf("PLEASE ENTER THE STRINGS IN LOWER CASE LETTER\n");
	printf("enter the first string\n");
	fgets(str1,100,stdin);
	printf("enter the second string\n");
	fgets(str2,100,stdin);
	if(strlen(str1) != strlen(str2))
	{
		printf("NOT ANAGRAMS\n");
		return 1;
	}
	length=strlen(str1);
	int sum=0;
	for(i=0;i<length;i++)
	{
		sum=sum+str1[i];
	}
	int result=0;
	for(i=0;i<length;i++)
	{
		result=result+str2[i];
	}
	
	
	if(sum==result)
	{
		 int cnt = 0;
   for(i=0;i<length;i++)
   {
   	    for(j=0;j<length;j++)
    	{
   	     	if(str1[i]==str2[j])
   	    	{	
	        	++cnt;
	    	}
    	}
   }
     if(cnt>=length)
     {
    	printf("ANAGRAMS\n");
    	return 1;
     }
       else
       {
    	printf("NOT ANAGRAMS\n");
    	return 1;
       }
}
	else
	{
		printf("NOT ANAGRAMS\n");
		return 1;
	}
}
 /*  char ch='a';
   char a[length],b[length];
   flag=0;
   for(i=0;i<length;i++)
   {
   	while(ch<='z')
   	{
   	  if(ch==str1[i])
	  {
		 a[i]=ch;
	  }	
	  ch++;
	}
   }
   for(i=0;i<length;i++)
   {
   	while(ch<='z')
   	{
   	  if(ch==str2[i])
	  {
		 b[i]=ch;
	  }	
	  ch++;
	}
   }*/
  /* int cnt = 0;
   for(i=0;i<length;i++)
   {
   	for(j=0;j<length;j++)
   	{
   		if(str1[i]==str2[j])
   		{	
		++cnt;
		}
	}
   }
   if(cnt==length)
   {
   	printf("ANAGRAMS\n");
   	return 1;
   }
   else
   {
   	printf("NOT ANAGRAMS\n");
   	return 1;
   }
}*/
   
