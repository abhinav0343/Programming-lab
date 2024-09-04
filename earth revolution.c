#include<stdio.h>
#include<conio.h>
void main () {
  int time_period,days,hours,minutes;
  printf("To convert time period of revolution of earth into days hours minutes\n ");
  time_period = 31558150;
  days = 31558150 / 86400;
  time_period = 31558150 % 86400;
  hours = time_period / 3600;
  minutes = time_period % 3600;
  printf("%d:%d:%d\n",days,hours,minutes);
  printf("hours:days:minutes");
  getch();
  }
  To convert time period of revolution of earth into days hours minutes
 365:6:550
hours:days:minutes