#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
        return 1;
    }

    int result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    return 0;
}
