#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int n;
	int i=1;
	clrscr();
	pf("Enter Any Number :\t");
	scanf("%d",&n);


	while(n>=i)
	{
		if(n%2==0)
		{
		}
		else
		{
		pf("%d\t",n);
		}
		n--;

	}

	getch();
}