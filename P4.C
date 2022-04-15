#include<stdio.h>
#include<conio.h>

void main()
{
int i,a[10];
clrscr();
printf("Enter the 10 numbers: \n");
for(i=0;i<10;i++)
{
  printf("number-%d: \n",i+1);
  scanf("%d",&a[i]);
}


for(i=0;i<10;i++)
{
printf("%d  ",a[i]);
}
getch();
}