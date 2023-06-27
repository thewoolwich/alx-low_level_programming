#include <stdio.h>

void reset_to_98(int *n);

int main(void)
{
    int n = 0;
    printf("Before reset: n = %d\n", n);

    reset_to_98(&n);

    printf("After reset: n = %d\n", n);

    return 0;
}

void reset_to_98(int *n)
{
    *n = 98;
}	
