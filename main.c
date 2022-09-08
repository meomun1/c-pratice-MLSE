#include <stdio.h>

int main()
{
    int integer1, integer2, sum;

    printf("Your first Integer number \n");
    scanf("%d", &integer1);

     printf("Your Second Integer number \n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    printf("Sum is %d\n", sum);

    return 0;
}