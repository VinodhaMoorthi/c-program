#include<stdio.h>
#include<conio.h>
void main()
{
int i,f=1,n;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("Factorial of %d is %d",n,f);
getch();
}