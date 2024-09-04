#include<stdio.h>
int main(){
  int seconds,total_seconds,hours_in_seconds,minutes_in_seconds,hours,minutes;
  printf("enter the time in hours minutes and seconds ");
  scanf("%d%d%d",&hours,&minutes,&seconds);
  hours_in_seconds = hours * 3600 ;
  minutes_in_seconds = minutes * 60 ;
  total_seconds = hours_in_seconds + minutes_in_seconds + seconds ;
  printf("%d is total seconds ", total_seconds) ;
  return 0 ; 
  }
 enter the time in hours minutes and seconds 1 1 60
3720 is total seconds
[Process completed - press Enter]