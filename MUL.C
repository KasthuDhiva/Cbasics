#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  printf("Enter the input for multiplication table:\n");
  scanf("%d",&n);
  for(i=0;i<=10;i++)
  {
  printf("%d X %d = %d\n",n,i,n*i);
  getch();
  }
}