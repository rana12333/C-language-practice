#include <stdio.h>

int main() {
    int number, i;

    // Input the number for which the multiplication table is to be displayed
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display multiplication table for the given number
   
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
