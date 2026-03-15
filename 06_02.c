/*
Assignment : 06
Topic : More on Operators in C Language
02 ||       Write a program to take a three digit number from the user and rotate its digit by one position towards the right.

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number");
    scanf("%d",&a);
    b=a%10;
    a/=10;
    printf("After rotating digits by one position towards the right = %d",(b*100)+a);
    return 0;
}