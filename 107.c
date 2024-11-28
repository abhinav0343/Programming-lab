#include<stdio.h>
#include<string.h>
void function(void)
{
    
    int  s[100],l[100];
    int n,i,a,k,b;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        a=n%10;
        if(a==0)
        {
            break;
        }
        else
        {
           s[i]=a;
           k=i;
           
           n=n/10;
        }
    }
    printf("number of digits in a number is = %d\n",k+1);
    
    for(i=0;i<=k;i++)
    {
        l[i]=s[k-i];
    }
    
    for(i=0;i<=k;i++) 
    {
        printf("%d",l[i]);
    }
    printf("\n");
    
    printf("enter no.of positions to fliped  from last\n");
    scanf("%d",&a);
    if(a<1||a>k+1)
    {
        printf(" invalid input\n");
    }
    else
    {
        b=k-a+1;
      for(i=0;i<a;i++)
      {
          l[b++]=s[i];
      }
    }
    for(i=0;i<k+1;i++)
    {
        printf("%d",l[i]);
    }

    
    
}

int main()
{
  function();
  
  
  return 0;
}
