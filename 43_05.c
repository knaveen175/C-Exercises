/*
Assignment : 43
Topic : Pointers
05||       There are five classes with different number of students in them. Five arrays containing marks of students of each class. Write a function to recieve an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among all classes.

*/
#include<stdio.h>
int find (int p[][50], int *q)
{
    int x[5], i, j, max;
    for ( i = 0 ; i < 5 ; i++)
    {
        max = p[i][0];
        for ( j = 0 ; j < q[i] ; j++)
            if (max < p[i][j])
                max = p[i][j];
        x[i] = max;
    }
    max = x[0];
    for ( i = 0 ; i < 5 ; i++)
        if ( max < x[i])
            max = x[i];

    return max;
}
int main()
{
    int class[5][50], i, j, n[5], x;
    for ( i = 0 ; i < 5 ; i++)
    {
        printf("Enter size of Class %d: ",i+1);
        scanf("%d",&n[i]);
        printf("Enter Marks of Each Students: ");
        for ( j = 0 ; j < n[i] ; j++)
            scanf("%d",&class[i][j]);
    }
    x = find(class, n);
    printf("Highest Mark among all Students in all classes = %d",x);
    return 0;
}