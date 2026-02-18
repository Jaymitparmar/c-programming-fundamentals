#include<stdio.h>
#include<conio.h>
#define pf printf

main()
{
	int i=1,n,sum=0;
	clrscr();

	pf("Enter Any Number:\t");
	scanf("%d",&n);

	while(n>=i)
	{
		sum=sum+i;

		i++;
	}
	pf("Sum:%d\t",sum);
	getch();

}