/*
Assignment : 02
Topic : printf and scanf
05 ||       Write a program to ask user about the cost price and selling price of banana per dozen. Calculate the profit or loss earned upon selling 25 Banana.

*/
#include<stdio.h>
int main()
{
    float x,y;
    printf("Cost price and Selling price of Banana per dozen respectively  ");
    scanf("%f %f",&x,&y);
    printf("Profit or Loss = %f", (y-x)/12);
    printf("\nProfit is with Positive Sign and Loss is with Negative Sign");
}