#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);  // Read string with spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write student records to file
    FILE *file = fopen("students.txt", "w");
    if(file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);
    printf("\nStudent records saved to students.txt\n");

    // Read student records from file
    file = fopen("students.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nReading student records from file:\n");
    struct Student s;
    while(fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    return 0;
}