#include<stdio.h>
#include<conio.h>
void main()
{
int n,q,r,d;
clrscr();
printf("Enter the Number: ");
scanf("%d",&n);
printf("Enter the Divisor: ");
scanf("%d",&d);
q=n/d;
r=n%d;
printf("Quotient=%d",q);
printf("\nRemainder=%d",r);
getch();
}