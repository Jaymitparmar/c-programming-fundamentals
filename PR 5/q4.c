#include <stdio.h>
#include<conio.h>

main()
{
    int r, c;

    printf("Enter array row size :");
    scanf("%d", &r);

    printf("Enter array column size :");
    scanf("%d", &c);

    int v[r][c];
    printf("\n\nEnter array elements :\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter v [%d][%d] :", i, j);
            scanf("%d", &v[i][j]);
        }
        printf("\n");
    }

    int r1, c1, p= 0;
    

    printf("Enter row number :");
    scanf("%d", &r1);

    printf("\nElements of row %d :", r1);
    for (int j = 0; j < c; j++)
    {
        printf("%d  ", v[r1][j]);
        P+= v[r1][j];
    }
    printf("\n");
    printf("sum of a row %d : %d\n", r1, p);

    printf("\n\n");
    printf("Enter column number :");
    scanf("%d", &c1);

    p= 0;

    printf("\nElements of column %d :", c1);
    for (int i = 0; i < r; i++)
    {
        printf("%d  ", v[i][col1]);
        p+= v[i][col1];
    }
    printf("\n");
    printf("The sum of a column %d : %d\n", c1, p);
getch();
}