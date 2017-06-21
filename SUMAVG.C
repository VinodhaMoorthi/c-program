#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,sum,avg;
clrscr();
printf("Enter the first number:");
scanf("%d",&a);
printf("\nEnter the second number:");
scanf("%d",&b);
printf("\nEnter the third number:");
scanf("%d",&c);
printf("\nEnter the four number:");
scanf("%d",&d);
sum=a+b+c+d;
avg=sum/4;
printf("\n Sum=%d",sum);
printf("\n Average=%d",avg);
getch();
}


