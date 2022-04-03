#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,sum,sub,mul,div;
  clrscr();
  printf("Enter two number:\n");
  scanf("%d %d",&a,&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  printf("Addition= %d\n",sum);
  printf("Subtraction= %d\n",sub);
  printf("Multiplication= %d\n",mul);
  printf("Division= %d\n",div);
  getch();
}
