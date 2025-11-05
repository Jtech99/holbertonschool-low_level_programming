#include <stdio.h>

/* Function prototype */
void reset_to_98(int *n);

int main(void)
{
    int num = 42;

    printf("Before: %d\n", num);
    reset_to_98(&num);  // pass the address of num
    printf("After: %d\n", num);

    return 0;
}

/* Function definition */
void reset_to_98(int *n)
{
    *n = 98;
}
