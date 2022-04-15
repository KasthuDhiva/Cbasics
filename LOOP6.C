#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,r=1;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
  for(j=1;j<=i;++j)
  {
  printf("%d ",r);
  r++;
  }
  printf("\n");
  }
  getch();
}
