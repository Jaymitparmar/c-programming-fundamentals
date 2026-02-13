#include<stdio.h>
#include<conio.h>
#define pf printf
#define sc scanf

main()
{
	int num;

	clrscr();

	pf("Enter Number\t:");
	sc("%d",&num);
	//First Method

	if(num%2==0)
	{
		pf("This Number is Even");
	}
	else
	{
		pf("This Number is Odd");
	}


	pf("\n\n\n\n");

	//Second Method
	if((num/2)*2==num)
	{
		pf("This Number is Even");
	}
	else
	{
		pf("This Number is Odd");
	}

	getch();


}