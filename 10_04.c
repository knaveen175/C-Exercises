/*
Assignment : 10
Topic : More on Decision Control Statements
04||       Write a program which takes the month number as input and display the number of days in that month.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any Month Number- ");
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
        printf("31 Days");
    else if (a==4 || a==6 || a==9 || a==11)
        printf("30 Days");
    else if (a==2)
        printf("28/29 Days");
    else
        printf("Invalid Month Number");
    return 0;
}