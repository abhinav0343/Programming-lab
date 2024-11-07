#include<stdio.h>
#include<string.h>

int main()
{
    int i,num,q,t,n;
    printf("PROGRAM FOR FINDING DIGITS IN A NUMBER THAT ARE ACTUALLY DIVIDING THE NUMBER \n");
    printf("enter no:of test cases\n");
    scanf("%d",&t);
    int a[t];
    printf("enter the numbers\n");
     
     for(i=0;i<t;i++)
     {
        scanf("%d",&a[i]);
     }
    for(i=0;i<t;i++)
    {
        int flag=0;
        num=a[i];
        q=a[i];
        n=a[i];
        while(num!=0)
        {
            n=num%10;\
            num=num/10;
            if(q%n==0)
            {
                flag++;
            }
        }
        printf("no:of digits in the number %d that are actually dividing it  %d are \n",a[i],flag);
    } 
}