/*
Assignment : 45
Topic : Structure
02||       Write a program to store information of 5 students and display them using structure.

*/
#include<stdio.h>
struct info
{
    char name[30], Section;
    int class, rollno;
}students[5];

int main()
{
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Name of Student %d: ",i+1);
        fgets ( students[i].name , 30 , stdin );
        for ( j = 0 ; j < 30 ; j++)
            if (students[i].name[j] == '\n')
                students[i].name[j] = '\0';

        printf("Enter Class of Student %d: ",i+1);
        scanf("%d",&students[i].class);
        printf("Enter Roll no of Student %d: ",i+1);
        scanf("%d",&students[i].rollno);
        printf("Enter Section of Student %d: ",i+1);
        scanf(" %c",&students[i].Section);
        getchar();
    }
    
    for ( i = 0 ; i < 5 ; i++)
    printf(" %s in the class %d %c with Roll no %d\n",students[i].name, students[i].class, students[i].Section, students[i].rollno);
    return 0;
}