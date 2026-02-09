#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	int a,b,c;
	clrscr();
	pf("\tBefore Swap Two Variable\n");
	pf("Enter value of a:");
	scanf("%d",&a);
	pf("Enter value of b:");
       scanf("%d",&b);
	pf("\tAfter Swap Two Variable\n");

	c=a;
	a=b;
	b=c;

	pf("\n\ta=%d\n",a);
	pf("\tb=%d",b);
	getch();
}

