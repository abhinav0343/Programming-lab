#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter number of test cases\n");
	int t,j,i,k;
	scanf("%d",&t);
	char a[t][10];
    getchar();//use getchar() when you used scanf function
    //getchar() is for new line better to use this after scanf function
	printf("enter the test cases\n");
     for(int i=0;i<t;i++)
     {
	   fgets(a[i],sizeof(a[i]),stdin);//gets function some times will not work so it is better to use fgets function
     }//in fgets first write the array and size of the variable entered and write stdin
     char temp;
	 for(k=0;k<t;k++)
	 {
        int length=strlen(a[k]);
		int flag =0;//doing bubble sorting
       for(i=0;i<length-1;i++)//this 'for' loop is for only outer loop dont use 'i' in comparing the strings
       {
     	  for(j=0;j<length-1-i;j++)//use 'j' in comparin of strings instead of 'i'
     	  {
	         if(a[k][j]<a[k][j+1])//strcmp is for strings not characters 
	         {
	         	temp=a[k][j];//here you are not using strcpy because strcpy is for copying entire string 
                a[k][j]=a[k][j+1];//but here you should swap characters not strings
                a[k][j+1]=temp;
                flag=1;
		     }
		  }
		  if(flag==0)
		  {
			break;
		  }
	   }
	 }
     printf("your strings after arranging them in lexographical order\n");
	for(i=0;i<t;i++)
     {
	  printf("%s\n",a[i]);
     }
}
