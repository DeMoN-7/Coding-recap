#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

void inputStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void displayStudents(Student students[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }
}

void sortStudentsByMarks(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void findHighestMarks(Student students[], int n) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s, Age: %d, Marks: %.2f\n", students[highestIndex].name, students[highestIndex].age, students[highestIndex].marks);
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[MAX_STUDENTS];
    inputStudents(students, n);

    displayStudents(students, n);

    sortStudentsByMarks(students, n);
    printf("\nStudents sorted by marks in descending order:\n");
    displayStudents(students, n);

    findHighestMarks(students, n);

    return 0;
}
