#include<stdio.h>
int main(){
char ch ;
printf("enter the letter \n");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z' )
{
  printf("entered letter is lower letter\n");
}
  else if(ch >= 'A' && ch <= 'Z')
  {
    printf("entered letter is capital letter");
  }
    else
    {
      printf("\nentered character is digit");
    }
  
}
