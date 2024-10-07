/*#include<stdio.h>
int main(){
char ch ;
printf("enter the letter \n");
scanf("%c",&ch);
(ch >= 'a' && ch <= 'z' )
? printf("entered letter is lower letter\n")
:printf("entered letter is capital letter");
}*/
/*#include<stdio.h>
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
}*/
#include<stdio.h>
int main ()
{
  int a,b,c,max;
  printf("TO FIND MAXIMUM OF THREE NUMBERS\n");
  printf("enter the numbers \n");
  scanf("%d%d%d",&a,&b,&c );
  if(a>=b)
  {
    if(a>c)
    {
      printf("\nmax=%d",a);
    } 
    else
    {
    printf("\nmax=%d",c);
    }  
  }  
  if (b>=a)
  {
    if(b>=c)
    {
      printf("max=%d\n",b);
    }
    else
    {
    printf("max=%d\n",c);  
    } 
  }   
 // max = b;
//  else
 // max = c;
 // printf("the maximum of three numbers is %d\n",max);
  return 0;
}
  /*TO FIND MAXIMUM OF THREE NUMBERS
enter the numbers
1 2 3
the maximum of three numbers is 3

[Process completed - press Enter]*/