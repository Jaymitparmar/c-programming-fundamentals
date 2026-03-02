#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j,s;

	clrscr();

	for(i=1; i<=5; i++)
	{
	   for(s=5; s>i; s--)
	   {
	   pf(" ");
	   }
		for(j=1; j<=i; j++)
		{
			pf("%d",j);

		}
	pf("\n");
	}

	getch();
}