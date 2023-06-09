#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Value of a = %d and b = %d before swap\n", a, b);

    swap(&a, &b);

    printf("Value of a = %d and b = %d after swap\n", a, b);
}


// int main() {
//     int a, b, swap;

//     printf("Enter the value of a: ");
//     scanf("%d", &a);

//     printf("Enter the value of b: ");
//     scanf("%d", &b);

//     printf("Value of a = %d and b = %d before swap\n", a, b);

//     swap = a;
//     a = b;
//     b = swap;

//     printf("Value of a = %d and b = %d after swap\n", a, b);
// }