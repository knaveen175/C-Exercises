/*
Assignment : 19
Topic : switch case control
05||       Construct the following if-else-if construct into switch case:
            if(var==1)
                printf("Good");
            else if(var==2)
                printf("better");
            else if(var==3)
                printf("best");
            else
                printf("invalid");
                
*/ 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number- ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Good");
        break;
    case 2:
        printf("Better");
        break;
    case 3:
        printf("Best");
        break;
    default:
        printf("Invaid");
        break;
    }
    return 0;
}