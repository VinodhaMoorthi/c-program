#include<stdio.h>
#include<conio.h>
void main()
{
float area,perimeter,r;
clrscr();
printf("Enter the Radius: ");
scanf("%f",&r);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("Area of Circle= %.2f",area);
printf("\nPerimeter of Circle= %.2f",perimeter);
getch();
}