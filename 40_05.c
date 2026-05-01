/*
Assignment : 40
Topic : Handling Multiple Strings
05||       Write a function to remove duplicate names stored in the list of names stored in a 2d char array.

*/
#include<stdio.h>
#include<string.h>
void duplicate(char name[][20])
{
    int i,j;
    for ( i = 0; name[i][0] != '\0'; i++)
    {
        for ( j = i+1 ; name[j][0] != '\0' ; j++)
        {
                if ( strcmp(name[i],name[j]) == 0 )
                {
                    name[j][0] = '\0';    
                }    
        }
    }
    
}
int main()
{
    char name[5][20];
    int i;
    for ( i = 0 ; i < 5 ; i++)
    {   
        printf("Enter Name %d: ",i+1);
        fgets(name[i], 20, stdin);
    }
    duplicate(name);
    printf("After Removing Duplicate Names: \n");
    for (i = 0; i < 5 ; i++)
        if (name[i][0] != '\0')
            printf("%s",name[i]);
    return 0;
}