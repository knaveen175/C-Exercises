/*
Assignment : 46
Topic : DMA
01||       Define a function to input variable length string and store it in an array without memory wastage.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *variable();
int main()
{
    char *a = variable();
    printf("You Entered: %s",a);
    free(a);
    return 0;
}
char *variable()
{
    char *p = (char*) malloc(100);
    printf("Enter a String: ");
    fgets (p , 100, stdin);
    for (int i = 0; p[i] != '\0' ; i++)
        if (p[i] == '\n')
            p[i] = '\0';
    
    p = realloc ( p, strlen(p) + 1);
    return p;
}