#include <stdio.h>

void sum(int p, int v);
void getChar(char ch);
void getfloat(float PI);

void getChar(char ch)
{
    printf("My Character is %c\n", ch);
}

void getfloat(float PI)
{
    printf("PI = %.2f\n", PI);
}

void sum(int p, int v)
{
    int s = p + v;
    printf("The sum of %d and %d is %d\n", p, v, s);
}

int main()
{
    sum(10, 20);

    int p, v;
    printf("Enter the value of P and V:\n");
    scanf("%d%d", &p, &v);
    sum(p, v);

    getChar('P');
    getfloat(3.14);

    return 0;
}
