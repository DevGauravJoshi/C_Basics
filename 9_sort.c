#include <stdio.h>

void swap(int *a, int *b) {
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main() {
    int numbers[] = {10,9,8,7,6,4,3,2,1};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < length ; i++) {
        for (int j = i + 1; j < length ; j++) {
            if (numbers[i] > numbers[j]) {
                swap(&numbers[i], &numbers[j]);
            }
        }
    }
    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
