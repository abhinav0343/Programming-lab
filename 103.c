#include <stdio.h>
#define MAX(x,y) ((x>y)?x:y)
int main() 
{
    int a,b,c;
    
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter another number:");
    scanf("%d",&b);
    c=MAX(a,b);
    printf("max=%d",c);
    return 0;
}
