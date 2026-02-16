#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int a,b,c;

	clrscr();
	pf("Enter First Number\t:");
	scanf("%d",&a);
	pf("Enter Second Number\t:");
	scanf("%d",&b);
	pf("Enter Third Number\t:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			pf("a is maximum")
		}
		else
		{
			pf("c is maximum");
		}

	}
	else
	{
		if(b>c)
		{
			pf("b is maximum")
		}
		else
		{
			pf("c is maximum");
		}
	}

	getch();

}