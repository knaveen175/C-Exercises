/*
Assignment : 19
Topic : switch case control
02||       Write a menu driven program with the following options.
                1.  Addition
                2.  Substraction
                3.  Multilplication
                4.  Division
                5.  Exit
           
*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while (1)
    {
        printf("\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your Choice- ");
        scanf("%d",&x);

        switch (x)
        {
        case 1:
            printf("Enter two Numbers- ");
            scanf("%d %d",&a,&b);
            printf("Sum is %d",a+b);
            break;
        
        case 2:
            printf("Enter two Numbers- ");
            scanf("%d %d",&a,&b);
            printf("Difference is %d",a-b);
            break;
        
        case 3:
            printf("Enter two Numbers- ");
            scanf("%d %d",&a,&b);
            printf("Product is %d",a*b);
            break;
        
        case 4:
            printf("Enter two Numbers- ");
            scanf("%d %d",&a,&b);
            printf("Quotient is %d ",a/b);
            break;
        
        case 5:
            exit(0);

        default:
            printf("Invalid Input");
    }
    }
    return 0;
}