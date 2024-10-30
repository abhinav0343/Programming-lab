#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void find(char mssg[]);

 int main()
 {
    char text[100];
    printf("enter the sentence\n");
    fgets(text,100,stdin);
    find(text);
 }

 void find(char mssg[])
 {
    int length;
    length=strlen(mssg);
    printf("length of the sentence is %d\n",length);
 }   