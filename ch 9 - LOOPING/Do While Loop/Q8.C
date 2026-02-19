#include <stdio.h>
#include <conio.h>

 main()
  {
    int num, temp, rem, sum = 0, digits = 0;
	clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

       for(; temp != 0; temp = temp / 10) {
	digits++;
    }

    temp = num;


    for(; temp != 0; temp = temp / 10) {
	rem = temp % 10;
	sum = sum + pow(rem, digits);
    }

    if(sum == num)
     {
	printf("Armstrong number");
    }

     else {
	printf("Not an Armstrong number");
    }

	getch();
}