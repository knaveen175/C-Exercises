/*
Assignment : 43
Topic : Pointers
01||       Write a function to swap strings of two char arrays.

*/
#include<stdio.h>
#include<string.h>
void swap (char *p, char *q)
{
    char c[100];
    strcpy(c,p);
    strcpy(p,q);  
    strcpy(q,c);  
}
int main()
{
    char a[100],b[100];
    int i;
    printf("Enter 1st String: ");
    fgets( a, 100, stdin);
    printf("Enter 2nd String: ");
    fgets( b, 100, stdin);
    for ( i = 0 ; a[i] ; i++)
        if( a[i] == '\n')
            a[i] = 0;
    for ( i = 0 ; b[i] ; i++)
        if( b[i] == '\n')
            b[i] = 0;
    swap(a,b);
    printf("After Swapping =>\n");
    printf("1st String: ");
    printf("%s",a);
    printf("\n2nd String: ");
    printf("%s",b);
    return 0;
}