#include<stdio.h>
#include<conio.h>
void main()
{
float s,p,n,r;
clrscr();
printf("Principle=");
scanf("%f",&p);
printf("\nNo.of Years=");
scanf("%f",&n);
printf("\nRate of Interest=");
scanf("%f",&r);
s=(p*n*r)/100;
printf("\nSimple Interest=%f",s);
getch();
}


