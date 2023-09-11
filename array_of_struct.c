#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int empId;
    char name[50];
    char designation[50];
    float basicSalary;
    float hraPercentage;
    float daPercentage;
    float grossSalary;
};

int main() {
    int n; // Number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures to store employee information
    struct Employee employees[n];

    // Input employee information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("HRA Percentage: ");
        scanf("%f", &employees[i].hraPercentage);
        printf("DA Percentage: ");
        scanf("%f", &employees[i].daPercentage);

        // Calculate gross salary
        employees[i].grossSalary = employees[i].basicSalary +
                                  (employees[i].basicSalary * employees[i].hraPercentage / 100) +
                                  (employees[i].basicSalary * employees[i].daPercentage / 100);
    }

    // Display employee information with gross salary
    printf("\nEmployee Information with Gross Salary:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Basic Salary: %.2f\n", employees[i].basicSalary);
        printf("HRA Percentage: %.2f%%\n", employees[i].hraPercentage);
        printf("DA Percentage: %.2f%%\n", employees[i].daPercentage);
        printf("Gross Salary: %.2f\n", employees[i].grossSalary);
    }

    return 0;
}
