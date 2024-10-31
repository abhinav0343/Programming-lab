#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  void read(char name[10][30],float marks[10]);

  int main()
  {
    int i;
    char student[10][30];
    printf("enter names of the students\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",student[i]);
    }
    printf("enter marks of the students respectively\n");
    float score[10];
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    read(student,score);
  }

  void read(char name[10][30],float marks[10])
  {
    int i;
    printf("information of students who scored more than 500\n");
    for(i=0;i<10;i++)
    {
        if(marks[i]>=500)
        {
            printf("name of the student : %s       marks of the student : %2f\n",name[i],marks[i]);
        }
    }
  }