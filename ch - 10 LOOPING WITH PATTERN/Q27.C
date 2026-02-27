#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=6; i<=10; i++)
	{
		for(j=6; j<=i; j++)
		{
			pf("%d\t",j*2);
		}
	pf("\n");
	}

	getch();
}