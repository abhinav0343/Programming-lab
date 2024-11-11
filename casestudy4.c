#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("GEM STONES \n");
    printf("GEM STONE:the element which is present in each single rock\n");
    printf("enter no:of rocks\n");
    scanf("%d",&n);
    char a[n][30];
    int j=0;
    for(i=0;i<n;i++)
    {
        printf("enter the elements in rock %d\n",i+1);
        scanf("%s",&a[i]);
    }
    int gem_stone=0;
   for(char ch='a';ch<='z';ch++)
   {
      int flag=1;
      for(i=0;i<n;i++)
      {
        if(strchr(a[i],ch)==NULL)//strchr is for finding the occurence of the element in a string
        {
            flag=0;
            break;
        }
      }
      if(flag==1)
      {
        gem_stone++;
      }
   }
    printf("no:of gem stones are %d\n",gem_stone);
}