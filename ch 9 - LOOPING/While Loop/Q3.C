#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i=1;
	int n;
	clrscr();
	pf("Enter Any Number :");
	scanf("%d",&n);
	while(i <= n)
	{
		pf("%d\t",i);
		i++;

	}

	getch();
}