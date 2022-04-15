#include<stdio.h>
#include<conio.h>
void main()
{
  int r,n,sum=0;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  while(n>0)
  {
  r=n%10;
  sum=sum+r;
  n=n/10;
  }
  printf("The sum of digits is: %d",sum);
  getch();
}