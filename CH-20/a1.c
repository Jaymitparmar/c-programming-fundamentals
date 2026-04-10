#include <stdio.h>

int c(int n)

{
    return n * n * n;
}
int main()

{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The cube of %d is %d\n", n, c(n));
    return 0;
}

/*
//#include <stdio.h>

void checkDivisible(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        printf("The given number is divisible by both 3 & 5.");
    } else {
        printf("The given number is not divisible by both 3 & 5.");
    }
}

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    checkDivisible(num);

    return 0;
}/**/