#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
int a,b;

 clrscr();

	pf("Eneter first number:");
	scanf("%d",&a);

	pf("Eneter second number:");
	scanf("%d",&b);

	pf("%d + %d = %d\n",a,b,a+b);
	pf("%d - %d = %d\n",a,b,a-b);
	pf("%d * %d = %d\n",a,b,a*b);
	pf("%d / %d = %d\n",a,b,a/b);

 getch();


}