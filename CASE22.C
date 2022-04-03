#include<stdio.h>
#include<conio.h>
void main()
{
float r,ac,l,b,ar,s,as;
int choice;
clrscr();
printf("Enter the numbers(11, 22 or 33):\n");
scanf("%d",&choice);
switch(choice)
{
case 11:
{
  printf("Enter the radius of the circle:\n");
  scanf("%f",&r);
  ac=3.14*r*r;
  printf("The area of the circle: %f \n",ac);
  break;
}
case 22:
{
  printf("Enter the length and breadth of the rectangle:\n");
  scanf("%f %f",&l,&b);
  ar=l*b;
  printf("The area of the rectangle: %f \n",ar);
  break;
}
case 33:
{
  printf("Enter the side of the square:\n");
  scanf("%f",&s);
  as=s*s;
  printf("The area of the square: %f \n",as);
  break;
}
default:
{
  printf("Invalid number\n");
  break;
}
}

getch();
}