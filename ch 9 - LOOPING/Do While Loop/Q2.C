#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	int i=1,n;                //N to 1 number
	clrscr();
		pf("Enter Any Number:");
		scanf("%d",&n);

	do
	{
		pf("%d\t",n);
		n--;

	}while(i<=n);


	getch();

}