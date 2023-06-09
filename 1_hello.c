#include <stdio.h>

int main() {
    int marks[20];
    int lowest_marks;
    int highest_marks;
    int length = sizeof(marks)/sizeof(marks[0]);

    for ( int i = 0; i < length; i++) {
        printf ("\nEnter the Marks of student %d :", i + 1);
        scanf("%d", &marks[i]);
    }

    lowest_marks = marks[0];
    highest_marks = marks[0];

    for (int i = 1; i < length; i ++) {
        if ( highest_marks <= marks[i]) {
            highest_marks = marks[i];
        }

        if ( lowest_marks >= marks[i]) {
            lowest_marks = marks[i];
        }
    }

    printf("\nThe highest marks is %d", highest_marks);
    printf("\nThe lowest marks is %d\n", lowest_marks);
}

