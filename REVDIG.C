#include<stdio.h>
#include<conio.h>
void main()
{
int n,rn=0,r;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rn=rn*10+r;
n/=10;
}
printf("Reversed number= %d",rn);
getch();
}