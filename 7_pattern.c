#include <stdio.h>

int main() {
    int number[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(number)/sizeof(number[0]);

    for (int i = 0; i <=3; i++) {
        printf("%d\t", number[i]);
    }
    printf("\n");

    for (int i = 3; i<=6; i++) {
        if (i <= 3) {
            printf("\t");
        }
        else {
            printf("%d\t", number[i]);
        }
    }
    printf("\n");

    for (int i = 5; i<=8; i++) {
        if (i < 7) {
            printf("\t");
        }
        else {
            printf("%d\t", number[i]);
        }
    }
    printf("\n");

}