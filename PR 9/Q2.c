#include <stdio.h>
#define pf printf

void cubeElements(int *a, int s)
{
    pf("\nCubes of all elements :\n");

    for (int i = 0; i < s * s; i++)
    {
        pf("%d ", (*(a + i)) * (*(a + i)) * (*(a + i)));

        if ((i + 1) % s == 0)
        {
            pf("\n");
        }
    }
}

int main()
{
    int s;

    pf("Enter array size :");
    scanf("%d", &s);

    int a[s][s];

    pf("\narray elements :\n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s ; j++)
        {
            pf("Enter a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeElements(&a[0][0], s);

    return 0;
}