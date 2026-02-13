#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int mark;
	clrscr();

	pf("Enter your mark\t:");
	scanf("%d",&mark);

	if(mark>=91 && mark<=100)
	{
		pf("Grade:A1");
	}
	else if(mark>=81 && mark<=90)
	{
		pf("Grade:A2");
	}
	else if(mark>=71 && mark<=80)
	{
		pf("Grade:B1");
	}
	else if(mark>=61 && mark<=70)
	{
		pf("Grade:B2");
	}
	else if(mark>=51 && mark<=60)
	{
		pf("Grade:C1");
	}
	else if(mark>=41 && mark<=50)
	{
		pf("Grade:C2");
	}
	else if(mark>=33 && mark<=40)
	{
		pf("Grade:D");
	}
	else if(mark>=0 && mark<=32)
	{
		pf("You Are Failed..");
	}

	getch();
}