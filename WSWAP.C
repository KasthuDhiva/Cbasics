#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("Enter a:\n");
  scanf("%d",&a);
  printf("Enter b:\n");
  scanf("%d",&b);
  printf("\nBefore Swapping: a=%d. b=%d",a,b);
  a=a-b;
  b=a+b;
  a=b-a;
  printf("\nAfter Swapping: a=%d. b=%d",a,b);
  getch();
}
