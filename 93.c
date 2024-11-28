#include<stdio.h>
int main()
{
int i=0,count=0;
char txt[100000],*ptr;
printf("enter the text");
gets(txt);
ptr=&txt[0];
while(*ptr!='\0')
{
if(*ptr==' ')
{
count++;
}
ptr++;
}
printf("no. of words are %d",count+1);
return 0;
}
