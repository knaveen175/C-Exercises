/*
Assignment : 20
Topic : switch case control
02||       Write a menu driven program with the following options:
        1. Factorial of a number
        2. Check Even or odd
        3. Area of Circle
        4. Sum of first N natural numbers
        5. Exit

*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int x,a,i,num=0,fact=1;
        float area;
       while(1)
{
       printf("\nSelect Option\n");
       printf("1. Factorial of a Number\n");
       printf("2. Check Even or odd\n");
       printf("3. Area of Circle\n");
       printf("4. Sum of first N natural numbers\n");
       printf("5. Exit\n");

        printf("Choose any Option- ");
        scanf("%d",&x);

        switch (x)
        {
        case 1:
                printf("Enter a Number- ");
                scanf("%d",&a);
                for ( i = 1; i <= a; i++)
                        fact = fact*i;
                printf("factorial = %d\n",fact);
                break;
        case 2:
                printf("Enter a Number- ");
                scanf("%d",&a);
                if (a%2)
                        printf("Odd Number\n");
                else   
                        printf("Even Number\n");
                break;
        case 3:
                printf("Enter radius of circle- ");
                scanf("%d",&a);
                area=3.14*a*a;
                printf("area = %lf\n",area);
                break;
        case 4:
                printf("Enter a Number- ");
                scanf("%d", &a);
                for ( i = 1; i <= a; i++)
                {        num = num + i;
                }
                printf("sum = %d\n",num);
                break;
        case 5:
                exit(0);
        default:
                break;
        }
}
        return 0;
}