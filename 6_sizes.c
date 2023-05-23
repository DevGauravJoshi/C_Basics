#include <stdio.h>

void main() {
    int size_int = sizeof(int);
    int size_float = sizeof(float);
    int size_char = sizeof(char);

    printf("Size of int: %d bytes\n", size_int);
    printf("Size of float: %d bytes\n", size_float);
    printf("Size of char: %d bytes\n", size_char);
}