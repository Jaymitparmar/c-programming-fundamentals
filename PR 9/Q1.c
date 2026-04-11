#include <stdio.h>

int main()
{
    char str[50];
    char *ptr;
    int length = 0;

    printf("string :");
    scanf("%[^\n]", str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The Length of a string is : %d\n", length);

    return 0;
}