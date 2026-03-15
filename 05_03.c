/*
Assignment : 05
Topic : More on Operators in C Language
03 ||       Write a program to print size of an int, a float, a char and a double type variable.
*/
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}