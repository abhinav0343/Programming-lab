#include<stdio.h>
#include<string.h>
int main()
{
int i=0,l;
char txt[100000],*ptr,txt1[1000000];
printf("enter the text");
gets(txt);
l=strlen(txt);
ptr=&txt[0];
while(*ptr!='\0')
{
      txt1[l-i-1]=txt[i];
      i++;
ptr++;
}
puts(txt1);
return 0;
}
