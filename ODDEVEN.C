#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the Number: ");
scanf("%d",&n);
if((n%2)==0)
{
printf("%d is EVEN Number",n);
}
else
{
printf("%d is ODD Number",n);
}
getch();
}