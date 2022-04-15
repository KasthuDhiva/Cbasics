#include <stdio.h>
#include <conio.h>

void main()
{
 int a[5],n,i,*p;
 p=&a;
 clrscr();
 printf("Enter the no. of elements\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("Enter the num%d:\n",i+1);
 scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
 if(*p<a[i]){
 *p=a[i];
 }
 }
 printf("The max value:%d",*(a+0));
 getch();
}