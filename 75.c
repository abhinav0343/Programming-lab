#include <stdio.h>
int main()
{
int i,rollnum,sub1[10],sub2[10],sub3[10],max1,max,max2,max3,pos,totmarks[10];
printf("enter the marks of 3 subjects of each student");
for(i=1;i<=10;i++)
{
    printf("\n%d student marks are",i);
    scanf("%d %d %d",&sub1[i],&sub2[i],&sub3[i]);
}
printf("\nenter the roll number of student");
scanf("%d",&rollnum);
switch(rollnum)
{
case 1:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 2:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 3:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 4:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 5:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 6:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 7:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 8:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 9:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
case 10:printf("\ntotal marks obtained by this student =%d",sub1[rollnum]+sub2[rollnum]+sub3[rollnum]);
            break;
 default :printf("\ndoes not present");
            break;
  }
  max1=sub1[1];
  for(i=1;i<=10;i++)
  {
  if(sub1[i]>=max1)
  {
  max1=sub1[i];
  }
  }
  for(i=1;i<10;i++)
  {
  if(max1==sub1[i])
  {
      pos=i;
      printf("\nmaximum marks in subject 1 are %d attained by student in rollnum %d",max1,pos);
   }
   }
   max2=sub2[1];
  for(i=1;i<=10;i++)
  {
  if(sub2[i]>=max2)
  {
  max2=sub2[i];
  }
  }
  for(i=1;i<10;i++)
  {
  if(max2==sub2[i])
  {
      pos=i;
      printf("\nmaximum marks in subject 2 are %d attained by student in rollnum %d",max2,pos);
   }
   }
   max3=sub3[1];
  for(i=1;i<=10;i++)
  {
  if(sub3[i]>=max3)
  {
  max3=sub3[i];
  }
  }
  for(i=1;i<10;i++)
  {
  if(max3==sub3[i])
  {
      pos=i;
      printf("\nmaximum marks in subject 3 are %d attained by student in rollnum %d",max3,pos);
   }
   }
    for(i=1;i<=10;i++)
  {
   totmarks[i]=sub1[i]+sub2[i]+sub3[i];
   }
   max=totmarks[1];
     for(i=1;i<=10;i++)
  {
  if(totmarks[i]>=max)
  {
  max=totmarks[i];
  }
  }
  for(i=1;i<10;i++)
  {
  if(max==totmarks[i])
  {
      pos=i;
      printf("\nmaximum total marks in all subjects are %d attained by student in rollnum %d",max,pos);
   }
   }
return 0;
}
   