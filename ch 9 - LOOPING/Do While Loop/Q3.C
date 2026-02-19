#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	char a='A',n;  //A to Z print
	clrscr();
			pf("Enter Sny Alphbat:");
			scanf("%c",&n);
	do
	{
		pf("%c\t",a);
		a++;

	}while(a<=n);

	getch();

}