#include<stdio.h>
int main()
{
    int i,n,m,a,b,t,total=0,average;
    printf("FINDING AVERAGE NO:OF CANDIES IN EVERY JAR\n");
    printf("enter the total no:of jars\n");
    scanf("%d",&n);
    printf("enter the no:of operations\n");
    scanf("%d",&m);
    printf("'a'=starting number of the jar");
    printf("\n========================\n");
    printf("'b'=ending number of jar\n");
    printf("========================\n");
    printf("remember both are inclusive\n");
    printf("that means the jar numbers a and b will also be included\n");
    printf("if you want to enter some candies in only a single jar then u can enter 'a' and 'b' values same\n");
    printf("========================\n");
    int p=1;
     for(i=0;i<m;i++)
     {
       printf("enter the values of 'a' and 'b' respectively in the operation %d\n",p);
       scanf("%d%d",&a,&b);
       printf("enter the no:of candies should filled in the jars\n");
       scanf("%d",&t);
       total=total+(b-a+1)*t;
       p++;
     }
  average=total/n;
  printf("average no:of candies that are added in every jar is %d\n",average);
}