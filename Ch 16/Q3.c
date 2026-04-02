#include <stdio.h>

int sum()
{
    int x, y;

    printf("Enter a and b : ");
    scanf("%d %d", &x, &y);

    return x + y;
}

int inputInt()
{
    int s;

    scanf("%d", &s);

    return s;
}

int main()
{
    printf("Ans : %d", sum());

    int num;

    printf("\nEnter any Number :");
    num = inputInt();

    printf("\n\n");
    printf("Number : %d", num);

    return 0;
}