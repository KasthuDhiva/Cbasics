#include<stdio.h>
#include<conio.h>

void main()
{
float S[5],tot=0,avg;
int i;
clrscr();
for(i=0;i<=4;i++)
{
printf("enter the mark- %d: ",i+1);
scanf("%f",&S[i]);
}
for(i=0;i<=4;i++)
{

 tot=tot+S[i];

}
printf("Total= %.2f\n",tot);
avg=tot/5;
printf("avg= %.2f",avg);
getch();
}