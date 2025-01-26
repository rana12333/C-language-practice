#include <stdio.h>

int main() {
    int a, b, sum;

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Add the two numbers`
    sum = a + b;

    // Print the result
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
