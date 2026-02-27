#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();

	for(i=0; i<=4; i++)
	{
		for(j=i; j<=4; j++)
		{
			if(j%2==0)  pf("%c\t",'A'+j);
			else pf("%c\t",'a'+j);
		}
	pf("\n");
	}

	getch();
}