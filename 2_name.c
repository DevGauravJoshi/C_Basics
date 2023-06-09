#include <stdio.h>

int main() {
    int marks[5] = {10,12,13,15,16};
    int *ptr = &marks;

    printf("Array is %d\n", *ptr);
}