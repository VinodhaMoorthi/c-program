#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],temp;
int i,j=0;
clrscr();
printf("Enter the string: ");
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("Reversed String: %s",str);
getch();
}

