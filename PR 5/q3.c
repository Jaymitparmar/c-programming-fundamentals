#include <stdio.h>
#include<conio.h>

main()
{
    int r, c;
      clrscr();

    printf("Enter array row size :");
    scanf("%d", &r);

    printf("Enter array column size :");
    scanf("%d", &c);

    int p [r][c];
    printf("\nEnter array elements :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter p [%d][%d] :", i, j);
            scanf("%d", &p[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Transpose matrix of  array :\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", p[j][i]);
        }
        printf("\n");
    }
   getch();
}