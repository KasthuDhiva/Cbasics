#include<stdio.h>
#include<conio.h>

void main()
{
int i,a[10],sum=0;
clrscr();
printf("Enter the 10 natural numbers to add: \n");
for(i=0;i<10;i++)
{
  printf("number-%d: \n",i+1);
  scanf("%d",&a[i]);
}


for(i=0;i<10;i++)
{
sum+=a[i];
}
printf("sum= %d",sum);
getch();
}