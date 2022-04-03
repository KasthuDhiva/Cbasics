#include<stdio.h>
#include<conio.h>
void main()
{
char choice;
clrscr();
printf("Enter the character:\n");
scanf("%c",&choice);
switch(choice)
{
case 'a':
{
  printf("The character is a vowel");
  break;
}
case 'e':
{
  printf("The character is a vowel");
  break;
}
case 'i':
{
  printf("The character is a vowel");
  break;
}
case 'o':
{
  printf("The character is a vowel");
  break;
}
case 'u':
{
  printf("The character is a vowel");
  break;
}
default:
{
  printf("Invalid character\n");
  break;
}
}

getch();
}