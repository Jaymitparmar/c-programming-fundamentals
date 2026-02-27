#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			if(j%2==0) pf("%d\t",j*j);
			else pf("%d\t",j*j*j);
		}
	pf("\n");
	}

	getch();
}