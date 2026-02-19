#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{


	int n, i = 2;
	clrscr();

	pf("Enter any number : ");
	scanf("%d",&n);

	do{
		if(i % 2 == 0)
		{
			pf("%d\t",i);
		}
		i++;

	}while(i <= n);

	getch();
}