#include <stdio.h>

unsigned long fibonacci(unsigned long n);
void print_fibonacci_sequence(int n);

int main(void)
{
    unsigned long n = 92;
    print_fibonacci_sequence(n);

    return 0;
}

unsigned long fibonacci(unsigned long n)
{
    unsigned long fib1, fib2, sum;
    unsigned long count;

    fib1 = 0;
    fib2 = 1;

    if (n <= 1)
        return n;

    for (count = 2; count <= n; count++)
    {
        sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = sum;
    }

    return fib2;
}

void print_fibonacci_sequence(int n)
{
    int count;
    for (count = 0; count < n; count++)
    {
        printf("%lu", fibonacci(count));

        if (count < n - 1)
            printf(", ");
    }

    printf("\n");
}
