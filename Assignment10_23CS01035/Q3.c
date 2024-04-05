#include <stdio.h>
union EmpDetails
{
    float wages;
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
    struct Employee emp;
    printf("Enter name of employee:");
    gets(emp.name);
    printf("Enter Employee ID:");
    scanf("%d",&emp.EmployeeID);
    printf("Enter Hourly Wage of Employee:");
    scanf("%f",&emp.Emp.wages);
    printf("Enter Salary of Employee:");
    scanf("%lf",&emp.Emp.salary);

    puts(emp.name);
    printf("Employee ID:%d\n",emp.EmployeeID);
    printf("Salary:%.2lf",emp.Emp.salary);

    return 0;
}