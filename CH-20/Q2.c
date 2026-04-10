#include <stdio.h>

void checkDivisible(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }
}

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    checkDivisible(num);

    return 0;
}
