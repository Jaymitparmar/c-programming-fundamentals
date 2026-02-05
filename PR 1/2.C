#include<stdio.h>
#include<conio.h>

main()

{
	float salary, HRA, DA, TA;
	float A, B, C, gross;

	clrscr();

	printf("Enter base salary:")
	scanf("%f",&salary);

	printf("Enter HRA :");
	scanf("%f",&HRA);

	printf("Enter DA :");
	scanf("%f",&DA);

	printf("Enter TA :");
	scanf("%f",&TA);

	A = salary*HRA/100;
	B = salary*DA/100;
	C = salary*TA/100;

	gross = salary+A+B+C;

	printf("Gross salary =%.2f",gross);

	getch();


}