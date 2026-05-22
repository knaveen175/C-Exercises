/*
Assignment : 42
Topic : Pointers
02||       Write a function to search all occurences of a given character in a given string. Result of search is a list of indices to be stored in the given array. [void search_all_occurences(char *str, char ch, int *arr);] 

*/
#include<stdio.h>
void search(char *p, char *q, int *r)
{
    int i,j=0;
    for ( i = 0 ; p[i] != '\0' ; i++)
        if (p[i] == *q)
        { 
            r[j] = i;
            j++;
        }
    r[j] = -1;
    printf("List of indices of occurence of %c are: ",*q);
    for ( i = 0 ; r[i] != -1 ; r++)
        printf("%d ",r[i]);
}
int main()
{
    char a[100],c;
    int i,n,array[100];
    printf("Enter a String: ");
    fgets(a , 100, stdin);
    for (i = 0 ; a[i] ; i++)
        if (a[i] == '\n')
            a[i] = '\0';
    printf("Enter a character: ");
    scanf("%c",&c);
    search(a,&c,array);
    return 0;
}