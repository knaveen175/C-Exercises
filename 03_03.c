/*
Assignment : 03
Topic : printf and scanf
03 ||       Write a program to input three characters from the user and display characters with their corresponding ASCII Codes. 

*/
#include<stdio.h>
int main()
{
    char x,y,z;
    printf("Enter three characters  ");
    scanf("%c %c %c",&x,&y,&z);
    printf("%c = %d\n %c = %d\n %c = %d",x,x,y,y,z,z);
    return 0;
}