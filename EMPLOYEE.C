#include<stdio.h>
#include<conio.h>
void main()
{
char ename[10],eid[6];
long int e_sal,tax=0,income;
clrscr();
printf("Enter the Employee Name: ");
scanf("%s",ename);
printf("Enter the Employee ID: ");
scanf("%s",eid);
printf("Enter the Salary: ");
scanf("%ld",&e_sal);
tax=e_sal/8;
income=tax*100;
printf("Name  :%s",ename);
printf("\nID    :%s",eid);
printf("\nSalary:%ld",e_sal);
printf("\nTax   :%ld",tax);
printf("\nIncome:%ld",income);
getch();
}

