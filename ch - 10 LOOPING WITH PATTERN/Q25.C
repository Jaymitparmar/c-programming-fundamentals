#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			if(i%2==0) pf("%d\t",j);
			else pf("%d\t",j*10);
		}
	pf("\n");
	}

	getch();
}