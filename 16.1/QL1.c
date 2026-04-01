#include <stdio.h>

void cube();

int main()
{
    cube();  
    return 0;
}

void cube()
{
    int v, p;   

    printf("Enter any number: ");
    scanf("%d", &v);

    p = v * v * v;
    printf("Cube is: %d", p);
}