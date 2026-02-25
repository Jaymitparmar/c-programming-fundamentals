#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
   int i,j;
   clrscr();

   for(i=55; i<=60; i++)
   {
	for(j=i; j<=60; j++)
	{
		pf("%d",j);
	}
	pf("\n");
   }

   getch();

}