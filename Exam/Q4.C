#include <stdio.h>

void main()
{

    int size;
    int *ptr;

    printf("enter size of array: ");
    scanf("%d", &size);
    printf("enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    cube(ptr, size);

    printf("\n");
    printf("cube of array elements is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i] * ptr[i] * ptr[i]);
    }
}
