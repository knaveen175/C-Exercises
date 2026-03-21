/*
Assignment : 19
Topic : switch case control
03||       Write a program which takes the day number of a week and displays a unique greeting message for the day.
           
*/ 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Day Number- ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("Good Morning\n Today's Sunday");
            break;
        case 2:
            printf("Good Morning\n Today's Monday");
            break;
        case 3:
            printf("Good Morning\n Today's Tuesday");
            break;
        case 4:
            printf("Good Morning\n Today's Wednesday");
            break;
        case 5:
            printf("Good Morning\n Today's Thursday");
            break;
        case 6:
            printf("Good Morning\n Today's Friday");
            break;
        case 7:
            printf("Good Morning\n Today's Saturday");
            break;
        
        default:
            printf("Invalid Number");
    }
    return 0;
}