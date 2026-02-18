#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int num,orignal,rev=0,rem;
	clrscr();
	pf("Enter Any Number:");
	scanf("%d",&num);
	orignal=num;
	while(num !=0)
	{
		rem =num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orignal == rev)
	{
		pf("Palindrome Number hai.\n");
	}
	else
	{
		pf("Palindrome Number nahi hai.\n");
	}

	getch();
}