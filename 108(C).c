#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2;
    char s1[30],s2[30];
    printf("enter the string 1:\n");
    gets(s1);
    printf("enter the string 2:");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(int i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("concatenated string=%s",s1);
    
}
