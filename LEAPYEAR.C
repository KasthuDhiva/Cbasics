#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the year: ");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
{
printf("\nLeap Year");
}
else
{
printf("\nNot a Leap Year");
}
}
else if(year%4==0)
{
printf("\nLeap Year");
}
else
{
printf("\nNot a Leap Year");
}
getch();
}