#include<stdio.h>
#include<conio.h>
void main()
{
  int i,c=0,n;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
   if(n%i==0)
   c++;
  }
  if(c==2)
  printf("prime number");
  else
  printf("not a prime number");
  getch();
}
