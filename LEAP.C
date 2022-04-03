#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  printf("Enter the year:\n");
  scanf("%d",&year);
  if(year%4==0)
    printf("It is a leap year");
  else
    printf("Not a leap year");
  getch();
}
