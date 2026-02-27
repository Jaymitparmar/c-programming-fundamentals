#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i,j;

	clrscr();      //Bhullllllllll

	for(i=0; j<=4; i++)
	{
		for(j=i; j<=5; j++)
		{
			if(i%2==0) pf("%d",j+1);
			else pf("%c",'A'+j);
		}
	pf("\n");
	}

	getch();
}
