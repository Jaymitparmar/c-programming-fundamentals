#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			if(j%2==0) pf("%d\t",j*j);
			else pf("%d\t",j);
		}
	pf("\n");
	}

	getch();
}