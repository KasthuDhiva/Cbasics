#include<stdio.h>
#include<conio.h>
void main()
{
  int n,rev=0,rem;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  while(n!=0)
  {
  rem=n%10;
  rev=rev*10+rem;
  n/=10;
  }
  printf("reversed number:%d\n",rev);
  getch();
}
