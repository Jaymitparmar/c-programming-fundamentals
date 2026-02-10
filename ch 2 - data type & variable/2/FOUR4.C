#include<stdio.h>
#include<conio.h>

	main()
{
	int p;
	int r;
	int n;
	clrscr();
	printf("Simple intrest p=");
	scanf("%d",&p);
	printf("	       r=");
	scanf("%d",&r);
	printf("	       n=");
	scanf("%d",&n);
	printf("\n\n");
	printf("%d*%d*%d/100=%d",p,r,n,p*r*n/100);
	getch();


}