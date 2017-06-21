#include<stdio.h>
#include<conio.h>
void main()
{
int feet,inches;
clrscr();
printf("Enter the feet: ");
scanf("%d",&feet);
inches=feet*12;
printf("feet= %d ft",feet);
printf("\ninches= %d\"",inches);
getch();
}