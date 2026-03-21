/*
Assignment : 19
Topic : switch case control
01||       Write a program which takes the month number as an input and display number of days in that month.
           
*/ 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Month Number- ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;

        case 2:
            printf("28 / 29 Days");
            break;

        case 6:
        case 4: 
        case 9:
        case 11:
            printf("30 Days");
            break;
            
        default:
            printf("Invalid Month Number");
    }
    return 0;
}