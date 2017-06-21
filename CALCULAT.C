#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res,ch;
char x;
clrscr();
//do
//{
printf("Enter A: ");
scanf("%d",&a);
printf("Enter B: ");
scanf("%d",&b);
printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n");
printf("Please Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
res=a+b;
printf("\nYou chose Addition");
printf("\nResult=%d",res);
break;
case 2:
res=a-b;
printf("\nYou chose Subtraction");
printf("\nResult=%d",res);
break;
case 3:
res=a*b;
printf("\nYou chose Multiplication");
printf("\nResult=%d",res);
break;
case 4:
res=a/b;
printf("\nYou chose Division");
printf("\nResult=%d",res);
break;
default:
printf("\nPlease enter the correct choice");
}
//printf("\nDo you want to continue Y/N");
//scanf("%c",x);
//}while(x=='Y');
getch();
}
