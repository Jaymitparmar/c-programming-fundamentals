#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{

    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int ch, n1, n2;
    while (1)
    {
        printf("\n Calculato menu:\n");
        printf("Press 1 for addition\n");
        printf("Press 2 for subtraction\n");
        printf("Press 3 for multiplication\n");
        printf("Press 4 for division\n");
        printf("Press 5 for modulus\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 0)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d %d", &n1, &n2);
        switch (ch)
        {
        case 1:
            printf("Result: %d\n", add(n1, n2));
            break;
        case 2:
            printf("Result: %d\n", subtract(n1, n2));
            break;
        case 3:
            printf("Result: %d\n", multiply(n1, n2));
            break;
        case 4:
            if (n2 != 0)
            {
                printf("Result: %.2f\n", divi(n1, n2));
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if (n2 != 0)
            {
                printf("Result: %d\n", mod(n1, n2));
            }
            else
            {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}