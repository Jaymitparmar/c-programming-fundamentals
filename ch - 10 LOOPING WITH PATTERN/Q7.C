#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
   int i,j;
   clrscr();

   for(i=10; i<=14; i++)
   {
	for(j=i; j<=14; j++)
	{
		pf("%d",j);
	}
	pf("\n");
   }

   getch();

}