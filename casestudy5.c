#include<stdio.h>
#include<string.h>
 int main()
 {
    int n,i,t,c,num,is_fibo,a,b;
    printf("PROGRAM TO FIND A NUMBER IS INCLUDED IN FIBONNAIC SERIES OR NOT\n");
    printf("enter no:of test cases\n");
    scanf("%d",&t);
    printf("enter the numebrs\n");
    int f[t];
    for(int k=0;k<t;k++)
    {
        scanf("%d",&f[k]);
    }
    a=0;
    b=1;
    //finding the max value in the entered numbers
    int val=f[0];
    for(int k=1;k<t;k++)
    {
        if(f[k]>val)
        {
            val=f[k];
        }
    }
    //now val is the maximum value 
    int fib[1000];
    a=0;
    b=1;
    fib[0]=0;
    int count=1;
    while(b<=val)
    {
        fib[count]=b;
        c=a+b;
        a=b;
        b=c;
        count++;//count is for counting the no:of elements in the fibonnaic series
    }
    for(int j=0;j<t;j++)
    {
        is_fibo=0;
        for(int p=0;p<count;p++)//in this for loop we must use count only we cannot use val in the palce of count
        {                       //becuase val is just the largest element in the entered numbers 
            if(f[j]==fib[p])    //but val is not no:of numbers in the fibonnaic series
            {
                is_fibo=1;
                break;
            }
        }
            if(is_fibo==1)
            {
               printf("FIBO\n");
            }
            else
            {
              printf("NOT FIBO\n");
            }
    }
}