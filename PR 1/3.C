#include<stdio.h>
#include<conio.h>

main()

{

	float FA, SA, A;

	clrscr();
	printf("Enter first angle :");
	scanf("%f",&FA);

	printf("Enter second angle :");
	scanf("%f",&SA);

	A = 180 -(FA+SA);

	printf("The third angle in :%.2f",A);

	getch();


}
