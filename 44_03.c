/*
Assignment : 44
Topic : Structure
03||       Write a funcion to Display Employee data [Refer structure from question 1].

*/
#include<stdio.h>
struct Employee
{
    int memberid, salary;
    char name[30];
};
int main()   
{
    struct Employee E1;
    printf("Enter Name: ");
    fgets(E1.name, 30, stdin);
    printf("Enter Member Id & Salary of an Employee: ");
    scanf("%d %d",&E1.memberid, &E1.salary);
    for ( int i = 0 ; E1.name[i] != '\0' ; i++)
        if (E1.name[i] == '\n')
            E1.name[i] = '\0';
    printf("A Employee name = %s \nMember id = %d \nSalary = %d", E1.name, E1.memberid, E1.salary);
    return 0;
}