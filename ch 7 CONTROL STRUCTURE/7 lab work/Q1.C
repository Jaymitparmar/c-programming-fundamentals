#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int a,b;

	clrscr();
	pf("Enter First Number\t:");
	scanf("%d",&a);
	pf("Enter Second Number\t:");
	scanf("%d",&b);

	if(a>b)
	{
		pf("b is minimum");
	}
	else
	{
		pf("a is minimum");
	}




	getch();
}

