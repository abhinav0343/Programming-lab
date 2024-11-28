#include<stdio.h>//program to know whether the entered letter is a small case or not
int main(){
char ch;//Y in output represents yes,N in output represents no

    printf("enter a character:");

    scanf("%c",&ch);

char s;

s=(ch>='a'&& ch<='z')?'Y':'N';

    printf("entered character is a small case charecter,%c",s);

return 0;

}
