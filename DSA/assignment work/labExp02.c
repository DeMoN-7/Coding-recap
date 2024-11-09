// #include <stdio.h>
// #include <string.h>

// struct EmployeeStruct {
//     char name[50];
//     int employeeID;
//     float salary;
// };

// union EmployeeUnion {
//     char name[50];
//     int employeeID;
//     float salary;
// };

// int main() {
//     struct EmployeeStruct empStruct;
//     strcpy(empStruct.name, "Alice");
//     empStruct.employeeID = 101;
//     empStruct.salary = 50000.50;

//     printf("Struct Employee:\n");
//     printf("Name: %s\n", empStruct.name);
//     printf("Employee ID: %d\n", empStruct.employeeID);
//     printf("Salary: %.2f\n", empStruct.salary);
//     printf("Memory size occupied by struct: %lu bytes\n\n", sizeof(empStruct));

//     union EmployeeUnion empUnion;
//     strcpy(empUnion.name, "Alice");
//     printf("Union Employee (Name):\n");
//     printf("Name: %s\n", empUnion.name);

//     empUnion.employeeID = 101;
//     printf("Union Employee (Employee ID):\n");
//     printf("Employee ID: %d\n", empUnion.employeeID);

//     empUnion.salary = 50000.50;
//     printf("Union Employee (Salary):\n");
//     printf("Salary: %.2f\n", empUnion.salary);
//     printf("Memory size occupied by union: %lu bytes\n", sizeof(empUnion));

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    free(arr);
    return 0;
}
