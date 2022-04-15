#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,fac=1;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  fac=fac*i;
  }
  printf("%d\n",fac);
  getch();
}
