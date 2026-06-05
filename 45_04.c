/*
Assignment : 45
Topic : Structure
04||       Write a program to enter marks of 5 students in Chemistry, Mathematics and Physics(out of 100) using a structure named Marks having roll no., name, chem_marks, math_marks and phy_marks and then display the percentage of each student.

*/
#include<stdio.h>
struct Marks
{
    char name[30];
    int rollno, chem_marks, math_marks, phy_marks;
}student[5];
int main()
{
    int i,j;
    for (i = 0 ; i < 5 ; i++)
    {
        printf("Enter Name: ");
        fgets ( student[i].name , 30 , stdin );
        for ( j = 0 ; j < 30 ; j++)
            if (student[i].name[j] == '\n')
                student[i].name[j] = '\0';

        printf("Enter Roll No.: ");
        scanf("%d",&student[i].rollno);
        printf("Enter Obtained Marks in Physics: ");
        scanf("%d",&student[i].phy_marks);
        printf("Enter Obtained Marks in Chemistry: ");
        scanf("%d",&student[i].chem_marks);
        printf("Enter Obtained Marks in Mathematics: ");
        scanf("%d",&student[i].math_marks);
        getchar();
    }
    int percent[5];
    for (i = 0 ; i < 5 ; i++)
        percent[i] = (student[i].phy_marks + student[i].chem_marks + student[i].math_marks) / 3;

    for ( i = 0 ; i < 5 ; i++)
        printf("%s whose Roll No. %d got %d percent\n", student[i].name, student[i].rollno, percent[i]);

    return 0;
}