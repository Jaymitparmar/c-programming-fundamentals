#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;
	clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        printf(" ");

        for(j=6-i;j<=5;j++)
        printf("%d",j);

        for(j=4;j>=6-i;j--)
        printf("%d",j);

        printf("\n");
    }

    getch();
}