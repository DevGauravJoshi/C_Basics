#include <stdio.h>

int main()
{
    int student_marks[] = {40, 15, 55, 23, 56, 67, 87, 54, 65, 99};
    int length = sizeof(student_marks) / sizeof(student_marks[0]);

    int lowest = student_marks[0];
    int highest = student_marks[0];

    for (int i = 0; i < length; i++)
    {

        if (lowest > student_marks[i + 1] && i < length - 1)
        {
            lowest = student_marks[i + 1];
        }

        if (highest < student_marks[i + 1] && i < length - 1)
        {
            highest = student_marks[i + 1];
        }
    }

    printf("The lowest score is %d\n", lowest);
    printf("The highest score is %d\n", highest);

    return 0;
}
