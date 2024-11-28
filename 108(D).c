#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char s1[30],s;
    printf("enter the string 1:\n");
    gets(s1);
    l=strlen(s1);
    for(int i=0;i<l/2;i++)
    {
        s=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=s;
    }
    printf("reversed string=%s",s1);
}
