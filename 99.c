#include <stdio.h>
int f(char x)
{ static int c=0;
   if(x==65||x==97||x==69||x==101||x==73||x==105||x==79||x==111||x==85||x==117)
    {
    c=c+1;
    }
    return (c);
}


int main() 
{
    FILE *fp;
    int r;
    char c;
    
    printf("enter a string\n");
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error opening file for writing");
        return 1;
    }
    while((c=getchar())!='\0')
    {
        putc(c,fp);
        
    }
    fclose(fp);
    fp=fopen("abc.txt","r");
     if(fp==NULL)
    {
        printf("error opening file for reading");
        return 1;
    }
     while((c=getc(fp))!=EOF)
    {
        r=f(c);
        
    }
    fclose(fp);
    printf(" no.of vowels %d",r);
    return 0;
}
