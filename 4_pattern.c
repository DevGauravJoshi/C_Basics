#include <stdio.h>
#include <string.h>

int main() {
    char infinity[] = "INFINITY";
    int length = strlen(infinity);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++ ) {
            printf("%c", infinity[j]);
        }
        printf("\n");
    }
    return 0;
}