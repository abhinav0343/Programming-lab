#include<stdio.h>
#include<stdlib.h>
int main()
{
   int   *aptr,n;
   int i,j;
   int t;
   printf("TO PRINT THE NUMBERS IN ASCENDING ORDER USING POINTER \n");
   printf("Enter the no:of numbers\n");
   scanf("%d",&t);
   int  p[t];//size of array should not be in not integer type ;
   aptr = &p[0];
   printf("enter the numbers\n");
     for(i=0;i<t;i++)
     {
    	scanf("%d",(aptr+i));
     }
  printf("initially your numbers are\n");
      for(i=0;i<t;i++)
      {
     	printf("%d\t",*(aptr+i));// aptr+0*sizeof(i);aptr+1*sizeof(i);aptr+2*sizeof(i)......
      }
      printf("\n======================\n");
   int  temp;
   for(i=0;i<t-1;i++)
   {
   	int flag=1;
    	for(j=0;j<t-1-i;j++)
    	{
   	  	  if( *(aptr + j ) > *(aptr + j + 1))
   	      {
   	        temp = *(aptr + j);//while writind code using pointers give spaces when u are using arthematuc operators
		    *(aptr + j ) =  *(aptr + j + 1);
	    	 *(aptr + j + 1)  = temp; 
		     flag=0;	
	      }
	    }
	 if(flag==1)
 	 break;//this statement break the nearest loop
   }
printf("after sorting the numbers in ascending order\n");
   for(i=0;i<t;i++)
   {
   	printf("%d\n",*(aptr+i));
   }
}
