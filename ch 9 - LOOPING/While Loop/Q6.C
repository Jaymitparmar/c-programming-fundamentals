#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i=1,n;
	clrscr();

	pf("Enter Any Number:\t");
	scanf("%d",&n);

	while(n>=i)
	{
	    pf("%d\t",n);
	    n--;

	}

	getch();

}