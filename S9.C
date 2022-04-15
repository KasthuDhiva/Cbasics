#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,t1=0,t2=1,nt;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  nt=t1+t2;
  printf("Fibonacci Series: %d, %d ",t1,t2);
  for(i=3;i<=n;i++)
  {
  printf(", %d",nt);
  t1=t2;
  t2=nt;
  nt=t1+t2;
  }
  getch();
}
