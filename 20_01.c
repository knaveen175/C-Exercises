/*
Assignment : 20
Topic : switch case control
01||       Write a program to find and display grade obtained by a student in test.Grading specifications are as follows: 
        - Marks from 90 to 100 : Grade A
        - Marks from 80 to less than 90 : Grade B
        - Marks from 70 to less than 80 : Grade C
        - Marks from 60 to less than 70 : Grade D
        - Marks from 50 to less than 60 : Grade E
        - Marks below 50 : Grade F
        - Marks greater than 100 or less than 0 : Invalid Marks

*/ 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Marks Obtained- ");
    scanf("%d",&x);
    switch (x)
    {
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
        printf("Grade A");
        break;

    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
        printf("Grade B");
        break;

    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
        printf("Grade C");
        break;

    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
        printf("Grade D");
        break;

    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
        printf("Grade E");
        break;

    default:
        if (x<50 && x>0)
            printf("Grade F");
        else
            printf("Invalid Marks");
        break;
    }
    return 0;
}