#include <stdio.h>
#include<conio.h>

main() 
{
    int num, rev = 0, rem;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num != 0; num = num / 10) {
	rem = num % 10;
	rev = rev * 10 + rem;
    }

    printf("Reverse number = %d", rev);

     getch();
}