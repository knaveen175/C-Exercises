/*
Assignment : 16
Topic : Level up with loops
04||       Write a program to check whether a given number is an Armstrong number or not.

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,num = 0;
    printf("Enter a Number: ");
    scanf("%d",&a);
        b=a;
    for ( i = 0; b > 0; i++)
    {
        b/=10;
    }
        b=a;
    while (b > 0)
    {
        c = b%10;
        num += pow(c,i); 
        b /= 10;
    }
    if (num == a)
        printf("Given Number is an Armstrong Number");
    else
        printf("Given Number is not an Armstrong Number");   
    return 0;
}