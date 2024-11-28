#include <stdio.h>
struct information
{
    int roll,t;
    char s[100];
};


int main() 
{
    
    int n,i;
    printf("enter no.of students\n");
    scanf("%d",&n);
    struct information a[n];
    printf("enter information of students\n");
    printf("roll number ,name,total marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d",&a[i].roll,&a[i].s,&a[i].t);
    }
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.JAVA","w");
    if(fp==NULL)
    {
        printf("error opening file for writing");
        return 1;
    }
    
    
    for(i=0;i<n;i++)
    {
       fprintf(fp,"%d\t",a[i].roll);
       fprintf(fp,"%s\t",a[i].s);
       fprintf(fp,"%d\n",a[i].t);
    }
     
    fclose(fp);
    
    return 0;
}
