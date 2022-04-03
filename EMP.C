#include<stdio.h>
#include<conio.h>
void main()
{
  int s;
  float hra=0.1,bp=0.2,it=0.05,ta=0.1,pf=0.05,net;
  clrscr();
  printf("Enter the salary:\n");
  scanf("%d",&s);
  net=hra*s + bp*s + ta*s - it*s - pf*s;
  printf("The net pay of employee:%f",net);
  getch();
}
