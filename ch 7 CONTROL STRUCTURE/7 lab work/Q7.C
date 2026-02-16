#include<stdio.h>
#include<conio.h>
#define pf printf

main()

{
	int a;
	clrscr();
	pf("Press 1 for English\n");
	pf("Press 2 for Hindi\n");
	pf("Press 3 for Gujrati\n");
	pf("Enter your choice:");
	scanf("%d",&a);
	clrscr();
	pf("Press 1 for Internet Recharge\n");
	pf("Press 2 for Top-up Recharge\n");
	pf("Press 3 for Special Recharge\n");
	pf("Enter your choice:");
	scanf("%d",&a);
	clrscr();
	switch(a)
	{
		case 1:
		pf("You have successfully done a Internet Recharge");
		break;
		case 2:
		pf("You have successfully done a Top-up Recharge");
		break;
		case 3:
		pf("You have successfully done a Special Recharge");
		break;

		default:
		{
			pf("Error");
		}
	}

	getch();
}