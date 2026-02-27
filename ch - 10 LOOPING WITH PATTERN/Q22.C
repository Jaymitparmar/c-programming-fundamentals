#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=6; i>=2; i--)
	{
		for(j=2; j<=i; j++)
		{
			(j%2==0)?pf("1"):pf("0");
		}
	pf("\n");
	}

	getch();
}