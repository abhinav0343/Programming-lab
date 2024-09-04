#include<stdio.h>
int main(){
char ch ;
printf("enter the letter \n");
scanf("%c",&ch);
(ch >= 'a' && ch <= 'z' )
? printf("entered letter is lower letter\n")
:printf("entered letter is capital letter");
}