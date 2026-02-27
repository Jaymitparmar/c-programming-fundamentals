#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=5; j>=i; j--)
		{
			pf("%d",j%2); //second tip (j%2 ==0)?pf("0"):pf("1");
		}
	pf("\n");
	}

	getch();
}