#include<stdio.h>
#include<conio.h>

	main()
{
	float PI=3.14;
	int r;
	clrscr();

	printf("Perimeter of the circle r=");
	scanf("%d",&r);
	printf("2*%.2f*%d=%.2f",PI,r,2*PI*r);

	getch();
}