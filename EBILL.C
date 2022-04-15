#include<stdio.h>
#include<conio.h>
void main()
{
  int unit;
  float bill;
  clrscr();
  printf("Enter the units:\n");
  scanf("%d",&unit);
  if(unit<=100)
  {
   bill=0;
   printf("%f",bill);
  }
  else if(unit<=150)
  {
   bill=(unit-100)*3*0.1;
   printf("%f",bill);
  }
  else if(unit<=200)
  {
   bill=15+(unit-150)*4*0.15;
   printf("%f",bill);
  }
  else if(unit<=250)
  {
   bill=45+(unit-200)*5*0.2;
   printf("%f",bill);
  }
  else
  {
   printf("Invalid");
  }
  getch();
}
