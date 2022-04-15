#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,a[10][10],b[10][10],mul[10][10],r,c;
clrscr();
printf("Enter the row: \n");
scanf("%d",&r);
printf("Enter the col: \n");
scanf("%d",&c);
printf("Enter the first matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the second matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Multiplication of matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",mul[i][j]);
}
printf("\n");
}
getch();
}