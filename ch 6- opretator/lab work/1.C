
#include<stdio.h>
#include<conio.h>
#define pf printf


main ()
{
	int x,y,z;

	clrscr();

	pf("Enter value of x=");
	scanf("%d",&x);
	pf("Enter value of y=");
	scanf("%d",&y);
	z=(x*x)+(2*x*y)+(y*y);
	pf("z=%d",z);
	getch();

}