#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 struct employee
 {
 	int num;
 	char name[50];
 	float basic;
 };
 
 int main()
 {
 	int n,i;
 	printf("enter no:of employees\n");
 	scanf("%d",&n);
 	struct employee det[n],*ptr;
	 printf("ENTER THE DETAILS OF EMPLOYEES\n");  
      for(ptr=det;ptr<det+n;ptr++)
 	  {
 	  	while(getchar() != '\n'); // to avoid input buffer;
 		printf("NAME : ");
 		fgets(ptr->name,sizeof(ptr->name),stdin);//inside of fgets u should not use ';' 
 		printf("EMPLOYEE NUMBER : ");
 		scanf("%d",&ptr->num); // ptr->num directly access the element so you have to use '&"
 		printf("BASIC PAY : ");
 		scanf("%f",&ptr->basic);
 		printf("===============\n");
	  }
	  ptr = det;
 printf("\nEMPLOYEE DETAILS\n");
  while(ptr < det+n)
  {
  	printf("\nNAME : %s",ptr->name);
  	printf("EMPLOYEE NUM : %d\n",ptr->num);
  	printf("BASIC PAY : %f\n",ptr->basic);
  	printf("========================\n");
  	ptr++;
  }
}
