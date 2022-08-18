#include<stdio.h>

struct employee{
    char *name;
    int age;
    int salary;
}emp1, emp2;

int manager()
{
    struct employee manager;
    // there is no need to redifine the struct for manager in this local variable.
    manager.age = 27;
    if (manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main()
{
    printf("Enter the salary of employee 1: ");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee 2: ");
    scanf("%d", &emp2.salary);
    printf("The salary of employee 1 is %d\n", emp1.salary);
    printf("The salary of employee 1 is %d\n", emp2.salary);
    printf("Manager's salary is %d", manager());
    return 0;
}