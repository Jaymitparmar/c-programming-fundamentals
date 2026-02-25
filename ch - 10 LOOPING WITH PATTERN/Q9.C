#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
   int i,j;
   clrscr();

   for(i=111; i<=116; i++)
   {
	for(j=i;j>=111;j--)
	{
		pf("%d",j);
	}
	pf("\n");
   }

   getch();

}