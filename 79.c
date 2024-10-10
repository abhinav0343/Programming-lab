#include<stdio.h>
#include<stdlib.h>
 void xchange(int,int);
  void main()
  {
    int x,y;
    printf("enter the values of x and y\n");
    scanf("%d %d",&x,&y);
    printf("x=%d,y=%d\n",x,y);
    xchange(x,y);
  }
  
 void  xchange(int x,int y)
  {
  int k;
  k=x;
  x=y;
  y=k;
  printf("x=%d,y=%d\n",x,y);
  }
  
