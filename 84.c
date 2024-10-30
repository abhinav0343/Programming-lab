#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 void read(char mssg[],int n);
 
 int main()
 {
 	int n;
 	printf("enter the size of array\n");
 	scanf("%d",&n);
    getchar();//to enter into new line After taking value of n
 	char info[n];
 	printf("enter information\n");
 	fgets(info,n,stdin);
 	read(info,n);
 }
 
 void read(char mssg[],int n)
 {
 	puts(mssg);
 	
 }