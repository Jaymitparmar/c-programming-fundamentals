#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int a=6,b=122;
	char c='s';
	clrscr();

	pf("Number\t : %d\n",a);
	pf("Char: %c\n",(char)a);

	pf("Number\t : %d\n",b);
	pf("Char: %c\n",(char)b);

	pf("Number\t : %c\n",(int)c);
	pf("Char: %c\n",c);

	getch();

}