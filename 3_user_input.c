#include <stdio.h>

int main() {
    int intValue;
    float floatValue;
    char stringValue[100];

    printf("Enter an integer value: ");
    scanf("%d", &intValue);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a string value: ");
    scanf("%s", stringValue);

    printf("Integer value: %d\n", intValue);
    printf("Float value: %f\n", floatValue);
    printf("String value: %s\n", stringValue);
}