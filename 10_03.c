/*
Assignment : 10
Topic : More on Decision Control Statements
03 ||       Write a program which takes the length of the sides of a triangle as input. Display whether the triangle is valid or not.

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle- ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
        printf("Triangle Exists");
    else
        printf("The Triangle is not possible with the given side lengths");
    return 0;
}