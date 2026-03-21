/*
Assignment : 19
Topic : switch case control
04||       Write a menu driven program with the following option:
            1.  Check whether the given set of three numbers are length of an isosceles triangle or not.
            2.  Check whether the given set of three numbers are length of an right angled triangle or not.
            3.  Check whether the given set of three numbers are equilateral triangle or not.
            4.  Exit
           
*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while (1)
    {
        printf("\nSelect any one\n");
        printf("1. Isosceles Triangle\n");
        printf("2. Right angled triangle\n");
        printf("3. Equilateral traingle\n");
        printf("4. Exit\n");

        printf("Enter your Choice- ");
        scanf("%d",&x);
        
        switch (x)
        {
        case 1:
            printf("Enter sides of Triangle- ");
            scanf("%d %d %d",&a,&b,&c);
            if (a==b || b==c || c==a)
                printf("Isosceles Triangle");
            else
                printf("Not an Isosceles Triangle");
            break;
        case 2:
            printf("Enter sides of Triangle- ");
            scanf("%d %d %d",&a,&b,&c);
            if (a!=b || b!=c || c!=a)
                printf("Right angled Triangle");
            else
                printf("Not an Right angled Triangle");
            break;
        
        case 3:
            printf("Enter sides of Triangle- ");
            scanf("%d %d %d",&a,&b,&c);
            if (a==b && b==c && c==a)
                printf("Equilateral Triangle");
            else
                printf("Not an Equilateral Triangle");
            break;

        case 4:
            exit(0);
        
        default:
            printf("\n       Invalid Input\n");
        }

    }
    return 0;
}