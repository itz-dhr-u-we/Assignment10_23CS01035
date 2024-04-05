#include <stdio.h>

enum PayType { hours, salary };

union EmpDetails 
{
    float hours;
    double salary;
};

struct Employee 
{
    int EmployeeID;
    char name[20];
    union EmpDetails Emp;
};

int main() 
{
    int ch;
    enum PayType wage = hours;
    enum PayType Salary = salary;

    struct Employee emp;

    printf("Enter name of employee: ");
    gets(emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.EmployeeID);

    printf("Enter Paytype:\n");
    printf("0. Hourly Wage\n");
    printf("1. Salary\n");
    printf("Enter Choice: ");
    scanf("%d", &ch);

    if (ch == wage) 
    {
        printf("Enter Hourly Wage of Employee: ");
        scanf("%f", &emp.Emp.hours);

        puts(emp.name);
        printf("Employee ID: %d\n", emp.EmployeeID);
        printf("Hourly Wage: %.2lf", emp.Emp.hours);
    } 
    else if (ch == Salary) 
    {
        printf("Enter Salary of Employee: ");
        scanf("%lf", &emp.Emp.salary);

        puts(emp.name);
        printf("Employee ID: %d\n", emp.EmployeeID);
        printf("Salary: %.2lf", emp.Emp.salary);
    }

    return 0;
}
