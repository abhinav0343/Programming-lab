#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    printf("TO FIND NO:OF VOWELS IN A STRING\n");
    char a[500],*aptr;
    aptr = &a[0];
    printf("Enter the string\n");
   // while(getchar() != '\n');
    fgets(a,sizeof(a),stdin);
    int count = 0;
    while( *aptr != '\0')
    {
        switch(*aptr)
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
            case 'U' : count++ ;
                      break;
        }
        aptr++;
    }
printf("NO:OF VOWELS IN THE STRING IS : %d \n",count);
}
