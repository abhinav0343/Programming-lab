#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int year;
    char bname[100],author[100]; 
};   //according to syntax of structure and completion of declaration semicoloumn is must
int main()
{
    struct book info;
    printf("enter the name of book\n");
    gets(info.bname);
    printf("\n");
    printf("enter the name of the author\n");
    gets(info.author);
    printf("\n");
    printf("enter the year of publition\n");
    scanf("%d",&info.year);
    printf("INFORMATION OF THE BOOK\n");
    printf("\n");
    printf("NAME OF THE BOOK : ");
    puts(info.bname);
    printf("NAME OF THE AUTHOR : ");
    puts(info.author);
    printf("YEAR OF PUBLICATION : ");
    if(info.year==0)
    {
        printf("NA\n");
    }
    else
    {
        printf("%d\n",info.year);
    }

}
