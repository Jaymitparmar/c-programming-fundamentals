#include<stdio.h>
#include<conio.h>
#define pf printf
#define sc scanf

main()
{
	int age;
	clrscr();
	pf("Enter youe age\t:");
	sc("%d",&age);
	if(age>=18)
	{
		pf("You Can Vote!!");
	}
	else
	{
		pf("You Cannot Vote!!!");
	}
	getch();


}