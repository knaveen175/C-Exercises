/*
Assignment : 44
Topic : Structure
04||       Write a function to sort Employees according to their salaries [Refer structure from question 1].

*/
#include<stdio.h>
struct Employee
{
    int memberid, salary;
    char name[30];
};
void func(int n)   
{
    int i;
    struct Employee E[n];
    for ( i = 0 ; i < n ; i++)
    {
        printf("Enter Name of Employee %d: ",i+1);
        scanf("%s",E[i].name);
        printf("Enter Member Id of Employee %d: ",i+1);
        scanf("%d",&E[i].memberid);
        printf("Enter Salary of Employee %d: ",i+1);
        scanf("%d",&E[i].salary);         
    }
    struct Employee A;
    int j;
    for ( i = 0; i < n-1; i++)
        for ( j = i+1; j < n; j++)
           if (E[i].salary > E[j].salary)
            {
                A       =   E[i];
                E[i]    =   E[j];
                E[j]    =   A;
            }
    for ( i = 0 ; i < n ; i++)
    {
        printf("Name: %s\t",E[i].name);
        printf("Member Id: %d\t",E[i].memberid);
        printf("Salary: %d\n",E[i].salary);
    }
}
int main()
{
    int n;
    printf("Enter number of Employees: ");
    scanf("%d",&n);
    func(n);
    return 0;
}