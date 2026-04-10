#include <stdio.h>

void main()

    int n = 10;

int *ptr;

ptr = &n;
printf("Value of n: %d\n", n);
printf("Address stored in ptr: %d\n", *ptr);

printf("N Address : %u\n", &n);
printf("ptr Address : %u\n", &ptr);
printf("ptr address : %p\n", ptr);
printf("ptr Address : %x\n\n", &ptr);

n = 20;
printf("Value of n: %d\n", n);
printf("Address stored in ptr: %d\n", *ptr);

*ptr = 30;
printf("Value of n: %d\n", n);
printf("Address stored in ptr: %d\n", *ptr);
}
