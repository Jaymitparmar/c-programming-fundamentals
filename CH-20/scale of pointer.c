#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%u=%d\n", ptr[i], *ptr[i]);
    }
    return 0;
}
