#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter a and b:\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a= %d , b= %d",a,b);
getch();
}