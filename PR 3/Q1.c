#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    char grade;

    clrscr();

    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    // Step 1: Grade using ternary operator
    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

    printf("\nYour Grade is: %c\n", grade);

    // Step 2: Comment using switch
    switch(grade)
    {
        case 'A':
            printf("Excellent work!\n");
            break;

        case 'B':
            printf("Well done!\n");
            break;

        case 'C':
            printf("Good job!\n");
            break;

        case 'D':
            printf("You passed, but you could do better.\n");
            break;

        case 'F':
            printf("Sorry, you failed.\n");
            break;
    }

    // Step 3: Eligibility using if-else
    if(grade != 'F')
        printf("You are eligible for the next level.\n");
    else
        printf("Please try again next time.\n");

    getch();
}