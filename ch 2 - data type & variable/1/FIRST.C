#include<stdio.h>
#include<conio.h>

main()
{
int a=12;
int b=6;

clrscr();

printf("Addition of %d and %d is %d\n",a,b,a+b);
printf("Subtraction of %d and %d is %d\n",a,b,a-b);
printf("Multiplicaton of %d and %d is %d\n",a,b,a*b);
printf("Division of %d and %d is %d\n",a,b,a/b);
printf("Modulo of %d and %d is %d\n\n\n",a,b,a%b);

printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,a/b);
printf("%d %% %d = %d\n",a,b,a%b);


getch();
}
