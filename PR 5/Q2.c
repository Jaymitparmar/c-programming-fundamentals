#include <stdio.h>
#include<conio.h>

main() {
    int a[10][10], i, j, row, col, max;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("Largest element is: %d", max);

    getch ();
}