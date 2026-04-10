#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];
    int *ptr;

    ptr = array;

    printf("\n\n\n Input values:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &ptr + i);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%u=%d\n", ptr + i, *(ptr + i));
    }

    return 0;
}