// Create a structure student and store name, age and marks of two students and calculate their average

#include <stdio.h>

struct student {
    char name[50];
    int age;
    float marks;
};

int main() {

    struct student s1 = {"Alice", 19, 87.5};
    struct student s2 = {"Bob", 20, 92.0};

    float avg_marks = (s1.marks + s2.marks) / 2.0;

    printf("Details of students:\n");
    printf("Student 1 - Name: %s, Age: %d, Marks: %.1f\n", s1.name, s1.age, s1.marks);
    printf("Student 2 - Name: %s, Age: %d, Marks: %.1f\n", s2.name, s2.age, s2.marks);

    printf("\nAverage marks of students: %.2f\n", avg_marks);

    return 0;
}
