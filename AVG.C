#include<stdio.h>
#include<conio.h>
void main()
{
float s1,s2,s3,s4,s5,sum,avg;
clrscr();
printf("Enter the mark of 5 subjects:\n");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
avg=sum/5;
printf("The total of the subject: %f\n",sum);
printf("Average of the subjects: %f\n",avg);
if(avg>80)
  printf("Grade: A+\n");
else if(65>avg && avg<=80)
  printf("Grade: A+\n");
else if(52>avg && avg<=65)
  printf("Grade: B\n");
else if(40>avg && avg<=52)
  printf("Grade: C\n");
else
  printf("Fail\n");
getch();
}