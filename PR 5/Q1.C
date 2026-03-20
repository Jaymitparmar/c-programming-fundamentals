#include<stdio.h>
#include<conio.h>

main()
{
	int size,i;
	int a[size];

	clrscr();
	printf("Enter the array's size:");
	scanf("%d",&size);

	printf("Enter arry's elementes:");
	for(i=0 ; i<size; i++);
	{
	scanf("%d",a[i]);
	}
	printf("Negative elements are:");
	for(i=0; i<size; i++);
	{
	if(a[i]<0)
	{
	printf("%d",a[i]);
	}
	}

	getch();
	}
