#include<stdio.h>
#include<conio.h>

main()
{
	float b;
	float h;

	clrscr();

	printf("arear of a triangle b=");
	scanf("%f",&b);
	printf("		    h=");
	scanf("%f",&h);
	printf("1/2* %.2f*%.2f=1/2*%.2f*%.2f",b,h,1/2*b*h);

	getch();

}