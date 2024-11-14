#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char *aptr;
    char a[100];
    printf("enter the elements in the string\n");
    gets(a);
    aptr=a;
    //printf("length of string including spaces is :\n");
    int count=0;
    while(*aptr!=NULL)
    {
      count++;
      aptr++;
    }
    aptr=a;
    printf("length of string including spaces is %d \n",count);
    //printf("length of string excluding spaces is : \n");
    count=0;
    while(*aptr != NULL)
    {
        if(*aptr != ' ')
        {
          count++;
        }
        aptr++;
    }
    printf("length of string excluding spaces is : %d\n ",count);
}
