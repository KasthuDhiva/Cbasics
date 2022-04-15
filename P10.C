#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,r,c,a[10][10],b[10][10],add[10][10];
clrscr();
printf("Enter the row: \n");
scanf("%d",&r);
printf("Enter the col: \n");
scanf("%d",&c);
printf("Enter the elements of matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The given matrix is : \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",a[i][j]);
}
printf("\n");
}
getch();
}