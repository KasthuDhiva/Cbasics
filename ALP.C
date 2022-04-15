
#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter the character:\n");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
   printf("Alphabet");
else
   printf("Not an Alphabet");
getch();
}