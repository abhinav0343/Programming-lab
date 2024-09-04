#include <stdio.h>

int main() {
    int marks[5],total=0,i;
    char division ;
    float percentage ;
    printf("enter the marks of each subject \n");
    for ( i = 0 ; i < 5 ; i++) { 
    printf("subject %d:",i+1);
    scanf("%d", &marks[i]);
    total += marks[i];
    }
    
    percentage = (float)total / 5 ;
    
    if ( percentage >=60 ) { 
    printf("first dvision\n");
    }
    else if ( percentage >=50 ) { 
    printf("second division\n ");
    }
    else if ( percentage >=40 ) {
    printf("third division\n");
    }
    else {
    printf("fail");
    }
    
    
    printf (" %d : total marks\n ",total);
    printf("%f: percentage\n ",percentage);
    return 0 ;
    }


     
   enter the marks of each subject
   subject 1:55
   subject 2:68
   subject 3:70
   subject 4:48
   subject 5:59
   first dvision
  300 : total marks
  60.000000: percentage

[Process completed - press Enter]