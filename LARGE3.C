#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c)
  printf("a=%d is greater",a);
else if(b>=a && b>=c)
  printf("b=%d is greater",b);
else
  printf("c=%d is greater",c);
getch();
}