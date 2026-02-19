#include <stdio.h>
#include<conio.h>
main()
 {
    int num, temp, rev = 0, rem;
	clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for(; num != 0; num = num / 10) {
        rem = num % 10;
        rev = rev * 10 + rem;
    }

    if(temp == rev) {
        printf("Palindrome number");
    } else {
        printf("Not a palindrome number");
    }

    getch();
}