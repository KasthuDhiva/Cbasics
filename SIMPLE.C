#include<stdio.h>
#include<conio.h>
void main()
{
float p,t,r,s;
clrscr();
printf("Enter the principle amount: \n");
scanf("%f",&p);
printf("Enter the rate: \n");
scanf("%f",&r);
printf("Enter the time: \n");
scanf("%f",&t);
s=(p*t*r)/100;
printf("The simple interest = %f\n",s);
getch();
}