#include <stdio.h>
#include<string.h>
int main()
{
    int s,i,j;
    char temp[100];
    printf("enter the number of strings");
    scanf("%d",&s);
    char *p[s];
    for(i=0;i<(s+1);i++)
    {
        p[i]=(char*)malloc(s*sizeof(char));
    }
    for(i=0;i<(s+1);i++)
    {
        gets(p[i]);
    }
    for(i=0;i<(s+1);i++)
    {
        puts(p[i]);
    }
    for(i=0;i<(s+1);i++)
    {
        for(j=i+1;j<=s;j++)
        {
           if(strcmp(p[i],p[j])>0) 
           {
               strcpy(temp,p[i]);
               strcpy(p[i],p[j]);
               strcpy(p[j],temp);
           }
        }
    }
    printf("ascending order");
    for(i=0;i<(s+1);i++)
    {
        puts(p[i]);
    }
}
