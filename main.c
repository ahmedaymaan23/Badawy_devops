// main.c
#include <stdio.h>

int main() {
    // Print a welcome message
    printf("Hello, World!\n");

    // Declare two integers
    int a, b, sum;

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate their sum
    sum = a + b;

    // Print the result
    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
