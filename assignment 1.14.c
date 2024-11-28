#include<stdio.h>//program to find entered charecter is of which type
int main(){
char ch;

    printf("enter a charecter:");

    scanf("%c",&ch);

if(ch>='0'&&ch<='9')
{
    printf("entered charecter is a digit");
}
else if(ch>='A'&&ch<='Z')
{
    printf("entered charecter is a capital letter");
}
else if(ch>='a'&&ch<='z')
{
    printf("entered charecter is a small case letter");
}
else
{
    printf("entered charecter is a special charecter");
}

return 0;

}
