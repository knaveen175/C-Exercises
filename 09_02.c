/*
Assignment : 09
Topic : Decision Control Statements
02 ||       Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.Now display whether the candidate passed or failed the examination.

*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter Marks of 5 Subjects- ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a<33 || b<33 || c<33 || d<33 || e<33)
    {
        printf(" ! Candidate Failed ");
        if (a<33)
            printf("Failed in Subject 1");
        if (b<33)
            printf("Failed in Subject 2");
        if (c<33)
            printf("Failed in Subject 3");
        if (d<33)
            printf("Failed in Subject 4");
        if (e<33)
            printf("Failed in Subject 5");
    }
    else
    {
        printf("Congratulations You Passed in All Subjects");
    }
    return 0;
}