#include<stdio.h>
#include<conio.h>
void main()
{
  float r,ar,cr;
  clrscr();
  printf("Enter the radius:\n");
  scanf("%f",&r);
  ar=3.14*r*r;
  printf("Area of circle %f\n",ar);
  cr=3.14*2*r;
  printf("Circumference of circle %f\n",cr);
  getch();
}
