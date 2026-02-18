#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int n,rem,rev=0;
	clrscr();
	pf("Enter Any Number:");
	scanf("%d",&n);

	while(n !=0)
	{
		rem =n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	pf("%d",rev);

	getch();
}