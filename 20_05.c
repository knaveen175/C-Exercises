/*
Assignment : 20
Topic : switch case control
05||       Write a menu driven program with the following options.
        1.  Calculate LCM of two numbers
        2.  Calculate sum of digits of a number
        3.  Volume of Cuboid
        4.  Check Whether a given number is prime or not
        5.  Exit

*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c,i,sum;
    while (1)
    {
        printf("\n");
        printf("1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of Digits\n");
        printf("3. Volume of Cuboid\n");
        printf("4. Check whether a given number is prime or not\n");
        printf("5. Exit\n");
        printf("Select any Option - ");

        scanf("%d",&x);

        switch (x)
        {
        case 1:
            printf("Enter two numbers- ");
            scanf("%d %d",&a,&b);
            for ( i = 1; ; i++)
            {
                if(i%a==0 && i%b==0)
                    break;
            }
            printf("LCM = %d",i);
            break;

        case 2:
            sum=0;
            printf("Enter a number- ");
            scanf("%d",&a);
            for ( i = 1; a>0 ; i++)
            {
                sum = sum + a%10;
                a/=10;
            }
            printf("Sum of Digits = %d",sum);
            break;

        case 3:
            printf("Enter Length, Breadth and Height of Cuboid- ");
            scanf("%d %d %d",&a,&b,&c);
            printf("Volume = %d",a*b*c);
            break;

        case 4:
            printf("Enter a number- ");
            scanf("%d", &a);
            for (i=2 ; i < a ; i++)
                {
                    if(c=(a%i==0))
                        break;
                }
            if (c==1)
                printf("Not a Prime Number");
            else
                printf("Prime Number");
            break;

        case 5:
            exit(0);
        
        default:
            printf("Invalid Input");
        }
    }
    
    

}