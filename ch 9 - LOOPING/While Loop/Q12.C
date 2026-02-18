#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int num,orignal,r=0 ,rem;
	clrscr();
	pf("Enter Any Number:");
	scanf("%d",&num);
	orignal=num;
	while(num !=0)
	{
		rem =num%10;
	       r=r+(rem*rem*rem);
		num=num/10;
	}
	if(r == orignal)
	{
		pf("Armstrong Number hai.\n");
	}
	else
	{
		pf("Armstrong Number nahi hai.\n");
	}

	getch();
}