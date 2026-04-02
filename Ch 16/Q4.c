#include <stdio.h>

int sub(int s, int p)
{
    return s - p;
}

int main()
{
    int s, p;

    printf("Enter s and p :");
    scanf("%d %d", &s, &p);

    int ans = sub(s, p);
    printf("Ans : %d", ans);

    return 0;
}