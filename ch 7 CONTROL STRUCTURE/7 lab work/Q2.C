#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	int num;
	clrscr();
	pf("Enter your number\t:");
	scanf("%d",&num);

	if(num>0)
	{
		pf("This Number is  Positive");

	}
	else if(num<0)
	{
		pf("This Number is Nagative");
	}
	else if (num==0)
	{
		pf("This Number is Nutral");
	}


	getch();

}