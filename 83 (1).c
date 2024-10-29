#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
float largest(float array[],int n);
int main()
{
    int i;
    float value[SIZE];
    printf("enter the array values\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%f",&value[i]);
    }
    printf("largest value is %f\n",largest(value,SIZE));
}
float largest(float array[],int n)
{
   int i;
   float max;
   max=array[0];
   for(i=0;i<n;i++)
   {
    if(max < array[i])
    {
        max = array[i]; 
    }
   }
   return max;
}