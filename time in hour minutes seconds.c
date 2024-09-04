#include<stdio.h>
int main (){
  int seconds,hours,minutes,total_seconds ;
  
  
  printf("ENTER THE TOTAL NUMBER OF SECONDS");
  scanf("%d",&total_seconds);
  
  
  
  hours = total_seconds / 3600 ;
  total_seconds = total_seconds % 3600 ;
  minutes = total_seconds / 60 ;
  seconds = total_seconds % 60 ;
  
  
  printf("Time is: %02d:%02d:%02d\n",hours,minutes,seconds);
  
  return 0;
  }
 ENTER THE TOTAL NUMBER OF SECONDS 3660
Time is: 01:01:00

[Process completed - press Enter]