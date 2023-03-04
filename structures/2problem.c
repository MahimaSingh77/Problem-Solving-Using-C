/*
Write a C program to accept the details of employee and display them using structure.
Details consist of Employee ID,Name,Designation,Department,Salary
*/

#include<stdio.h>
struct detail {
    int employee_Id;
    char name[50];
    char designation[50];
    char department[50];
    int Salary;
};




int main(){
    struct detail employee;
    printf("Enter the employee id : ");
    scanf("%d" , &employee.employee_Id);
    printf("Enter the name of the employee : ");
    scanf("%s" , &employee.name);
    printf("Employees's id is %d\n" , employee.employee_Id);
    printf("Name of the employee is %s\n" , employee.name);
    return 0;
}