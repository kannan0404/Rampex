#include <stdio.h>

int main() {
    char name[100];   // Array to store name (maximum 100 characters)
    int age;          // Variable to store age
    float salary;     // Variable to store salary

    // Read the name, age, and salary from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // To read the name with spaces

    printf("Enter your age: ");
    scanf("%d", &age);   // Read the age

    printf("Enter your salary: ");
    scanf("%f", &salary);   // Read the salary

    // Display the entered details
    printf("\nEntered details:\n");
    printf("Name: %s", name);   // Display name
    printf("Age: %d\n", age);   // Display age
    printf("Salary: %.2f\n", salary);   // Display salary with two decimal places

    return 0;
}
