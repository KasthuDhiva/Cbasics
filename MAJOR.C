#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter the age ");
scanf("%d",&age);
if(1<=age && age<18)
  printf("Minor\n");
else if(18<=age && age<40)
  printf("Major\n");
else if(40<=age && age<120)
  printf("Adult\n");
else
  printf("Invalid\n");
getch();
}