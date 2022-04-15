#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int low,upp;
clrscr();
printf("Enter the character:\n");
scanf("%c",&c);
low=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
upp=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
if(low || upp)
   printf("Vowel");
else
   printf("Consonant");
}
else
{
  printf("Not an alphabet");
}
getch();
}