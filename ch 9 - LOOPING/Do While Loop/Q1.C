#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	int i=1,n;                //1to N number
	clrscr();
		pf("Enter Any Number:");
		scanf("%d",&n);

	do
	{
		pf("%d\t",i);
		i++;

	}while(i<=n);


	getch();

}