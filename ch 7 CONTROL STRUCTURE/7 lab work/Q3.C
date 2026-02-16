#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{       int a,b,c;
	float  d;

	clrscr();

	pf("Enter maths mark :");
	scanf("%d",a);
	pf("Enter english mark :");
	scanf("%d",b);
	pf("Enter science mark :");
	scanf("%d",c);
	d=a+b+c*100/300;
	pf("Average mark:%f",d);

	getch();
}