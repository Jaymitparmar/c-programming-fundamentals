#include<stdio.h>
#include<conio.h>
#define pf printf


 main()
 {
	int n, i;
	int a = 0, b = 1,c;
	clrscr();

	pf("Enter any number : ");
	scanf("%d",&n);

	pf("%d %d ", a, b);

	for(i = 3; i <= n; i++){
		c = a + b;
		pf("%d\t",c);
		a = b;
		b = c;
	}

	getch();

}