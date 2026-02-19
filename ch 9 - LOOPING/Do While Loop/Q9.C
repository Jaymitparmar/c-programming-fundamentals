#include <stdio.h>
#include<conio.h>

main() {
    int num, sum, rem;
	clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num > 9; ) {
        sum = 0;

        for(; num != 0; num = num / 10) {
            rem = num % 10;
            sum = sum + rem;
        }

        num = sum;
    }

    if(num == 1) {
        printf("Magic number");
    } else {
        printf("Not a magic number");
    }

    getch();
}