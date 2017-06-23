#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],temp;
int i,j;
clrscr();
printf("Enter a String: ");
scanf("%s",str);
printf("\n\n Original String: %s",str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("\n After Swapping: %s",str);
getch();
}