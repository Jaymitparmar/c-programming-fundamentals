#include <stdio.h>

void main()
{
    int array[5];

    printf("enter 1st element of array: ");
    scanf("%d", &array[0]);
    printf("enter2nd element of array: ");
    scanf("%d", &array[1]);
    printf("enter 3rd element of array: ");
    scanf("%d", &array[2]);
    printf("enter 4th element of array: ");
    scanf("%d", &array[3]);
    printf("enter 5th element of array: ");
    scanf("%d", &array[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    int sum = 0;

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }
    printf("sum of array elements is: %d", sum);
}