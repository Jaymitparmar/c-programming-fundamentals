

















#include<stdio.h>
#include<conio.h>


 main()
{
     const float PI=3.14;
     int r;

	clrscr();

	printf("area of circle r=");
	scanf("%d",&r);
	printf("%.2f*%d*%d=%.2f",PI,r,r,PI*r*r);


	getch();

}