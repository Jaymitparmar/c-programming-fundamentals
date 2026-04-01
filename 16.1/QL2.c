#include <stdio.h>

void divisible(int p);

int main()
{
    int p;

    printf("Enter any Number : ");
    scanf("%d", &p);

    divisible(p);

    return 0;
}

void divisible(int p)
{
    if (p % 3 == 0 && p % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
        printf("The given number is not divisible by both 3 & 5.");
}