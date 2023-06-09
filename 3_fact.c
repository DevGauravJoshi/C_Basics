#include <stdio.h>

int main() {
    int number,factorial;

    printf("Enter the number: ");

    scanf("%d", &number);

    factorial = number;

    for (int i = number; i > 1; i = i - 1) {
        factorial = factorial * (i - 1);
    }

    printf("The factorial  is %d\n", factorial);

    return 0;
}
