#include<stdio.h>
#include<conio.h>

main()
{
    char name[50];
    long mobile;
    int age, persons;
    int category, movie, timeChoice;
    int snackChoice, snackQty;

    float ticketPrice = 250;
    float snackPrice = 0;
    float total = 0, cgst, sgst, grandTotal;
    clrscr();
    printf("\t\t  =========== WELCOME TO INOX MOVIES ===========\n");

    printf("\nEnter Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Mobile Number: ");
    scanf("%ld", &mobile);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Persons: ");
    scanf("%d", &persons);

    printf("\nSelect Movie Category:\n");
    printf("1. Bollywood\n2. Hollywood\n3. Tollywood\n4. South\n5. Animation\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    printf("\nSelect Movie:\n");
    if(category == 1)
        printf("1. Pathaan\n2. Jawan\n3. Animal\n4. Dunki\n5. Tiger 3\n");
    else if(category == 2)
        printf("1. Avatar\n2. Avengers\n3. Batman\n4. Joker\n5. Inception\n");
    else if(category == 3)
        printf("1. RRR\n2. Pushpa\n3. Bahubali\n4. Saaho\n5. KGF\n");
    else if(category == 4)
        printf("1. Vikram\n2. Leo\n3. Master\n4. Jailer\n5. Robot\n");
    else
        printf("1. Frozen\n2. Minions\n3. Toy Story\n4. Coco\n5. Kung Fu Panda\n");

    printf("Enter movie choice: ");
    scanf("%d", &movie);

    printf("\nSelect Show Time:\n");
    printf("1. 9AM\n2. 12PM\n3. 3PM\n4. 6PM\n5. 9PM\n");
    printf("Enter choice: ");
    scanf("%d", &timeChoice);

    total = ticketPrice * persons;

    printf("\nSnacks Menu:\n");
    printf("1. Popcorn (100)\n2. Nachos (120)\n3. Burger (150)\n4. Cold Drink (80)\n5. Combo (200)\n");
    printf("Enter snack choice: ");
    scanf("%d", &snackChoice);

    printf("Enter Quantity: ");
    scanf("%d", &snackQty);

    switch(snackChoice)
    {
	case 1: snackPrice = 100; break;
        case 2: snackPrice = 120; break;
        case 3: snackPrice = 150; break;
        case 4: snackPrice = 80; break;
        case 5: snackPrice = 200; break;
        default: snackPrice = 0;
    }

    total += snackPrice * snackQty;

    cgst = total * 0.09;
    sgst = total * 0.09;
    grandTotal = total + cgst + sgst;

    clrscr();
    printf("\n=============YOUR BILL DETAILS =============\n");
    printf("\tName: %s\n", name);
    printf("\tMobile: %ld\n", mobile);
    printf("\tPersons: %d\n", persons);
    printf("\tTicket Amount: %.2f\n", ticketPrice * persons);
    printf("\tSnacks Amount: %.2f\n", snackPrice * snackQty);
    printf("\tCGST: %.2f\n", cgst);
    printf("\tSGST: %.2f\n", sgst);
    printf("\tGrand Total: %.2f\n", grandTotal);
    printf("=============================================\n");

    getch();
}