/*
Assignment : 09
Topic : Decision Control Statements
01 ||       Write a program which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.

*/
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter cost price and selling price of a product- ");
    scanf("%f %f",&x,&y);
    if (x<y)
        printf("Profit % = %lf ",((y-x)*100)/x);
    else if (y<x)
        printf("Loss % = %lf ",((x-y)*100)/x);
    else
        printf("Neither Profit Nor Loss");
    return 0;
}