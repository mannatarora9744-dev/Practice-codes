#include <stdio.h>
#include <stdlib.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure with nested Date
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    FILE *file;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Joining date (day month year): ");
        scanf("%d %d %d", &employees[i].joiningDate.day, &employees[i].joiningDate.month, &employees[i].joiningDate.year);
    }

    // Write employee data to binary file
    file = fopen("employees.dat", "wb");
    if(file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), n, file);
    fclose(file);
    printf("\nEmployee data written to employees.dat successfully.\n");

    // Read employee data from binary file
    file = fopen("employees.dat", "rb");
    if(file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Employee readEmployees[n];
    fread(readEmployees, sizeof(struct Employee), n, file);
    fclose(file);

    // Print employee data read from file
    printf("\nEmployee Details from File:\n");
    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmployees[i].name);
        printf("ID: %d\n", readEmployees[i].id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n", readEmployees[i].joiningDate.day,
               readEmployees[i].joiningDate.month, readEmployees[i].joiningDate.year);
    }

    return 0;
}