#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=5; i>=1; i--)
	{
	   for(s=5; s>i; s--)
	   {
	   pf(" ");
	   }
		for(j=i; j>=1; j--)
		{
			pf("%d",j);
		}
	pf("\n");
	}

	getch();
}