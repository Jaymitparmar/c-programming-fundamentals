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