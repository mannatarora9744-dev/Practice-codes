#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    // Input details for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Find student with highest marks
    int maxIndex = 0;
    for(int i = 1; i < 5; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print the student with highest marks
    printf("Student with the highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}