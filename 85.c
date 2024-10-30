#include<stdio.h>
#include<stdlib.h>

 char check(char mssg);

 int main()
 {
    char letter;
    printf("enter the character\n");
    scanf(" %c",&letter);
    check(letter);
 }

char check(char mssg)
{
   switch(mssg)
   {
    case 'a' :
    case 'e' :
    case 'i' : 
    case 'o' :
    case 'u' : 
    case 'A' :
    case 'E' : 
    case 'I' : 
    case 'O' : 
    case 'U' : printf("letter is vowel\n");
             break;
                                                     
    default : printf("letter is not vowel\n");
            break;                                            
  }
}