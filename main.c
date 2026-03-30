#include <stdio.h>
#include <stdlib.h>

// Function to calculate the power of a number (base^exponent)
int power(int base, int exponent)
{
    int result = 1;
    int i;

    if(exponent < 0)
    {
        printf("Negative exponents are not supported.\n");
        return -1;
    }

    for(i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exponent, result;

    printf("Enter base and exponent:\n");
    scanf("%d %d", &base, &exponent);

    result = power(base, exponent);

    if(result != -1)
    {
        printf("Result: %d\n", result);
    }

    return 0;
}
