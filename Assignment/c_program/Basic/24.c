#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    float salary;
} Employee;

int main() {
    Employee employees[MAX_EMPLOYEES];
    float totalSalary = 0.0;

    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(employees[i].name, MAX_NAME_LENGTH, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; 

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        getchar(); 

        totalSalary += employees[i].salary;
    }

    float averageSalary = totalSalary / MAX_EMPLOYEES;

    printf("\nEmployees' information:\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Name: %s, Salary: %.2f\n", employees[i].name, employees[i].salary);
    }

    printf("\nTotal salary: %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);

    return 0;
}