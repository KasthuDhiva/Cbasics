#include<stdio.h>
#include<conio.h>
void main()
{
  int r,n,temp,sum=0;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
  r=n%10;
  sum=sum+(r*r*r);
  n=n/10;
  }
  if(temp==sum)
  {
  printf("The given number is an armstrong number");
  }
  else
    printf("not an armstrong");
  getch();
}