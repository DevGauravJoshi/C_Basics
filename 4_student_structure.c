#include <stdio.h>

struct student {
    int roll_no;
    char name[20];
    char course[20];
    int marks_obtained;
};

void main() {
    struct student s1 ; 
    printf("Enter the student roll number: ");
    scanf("%d", &s1.roll_no);
    getchar();
    printf("Enter the student name: ");
    scanf("%[^\n]", s1.name);
    getchar();
    printf("Enter the student course name: ");
    scanf("%[^\n]", s1.course);
    printf("Enter the student Marks: ");
    scanf("%d", &s1.marks_obtained);
    printf("____________________________________\n");
    printf("Student name is: %s\n", s1.name);
    printf("Student roll is: %d\n", s1.roll_no);
    printf("Student course is: %s\n", s1.course);
    printf("Student Marks is: %d\n", s1.marks_obtained);
};