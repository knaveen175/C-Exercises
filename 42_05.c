/*
Assignment : 42
Topic : Pointers
05||       Write a function to extract a substring from a given string with specified start index(inclusive) and end index(exclusive), and store the extracted string in another char array.[void extract_string(char *str, int start_index, int end_index, char *result);]

*/
#include<stdio.h>
void conversion (char *p, char *q, int *a, int *b)
{
    int i,j=0;
    for ( i = *a ; i < *b ; i++, j++)
        q[j] = p[i];
    
    q[j] = 0;
}
int main()
{
    char arr[100], str[100];
    int i, start_index, end_index;
    printf("Enter a String: ");
    fgets( arr, 100, stdin);
    for ( i = 0 ; arr[i] ; i++)
        if( arr[i] == '\n')
            arr[i] = '\0';
    printf("Enter starting and ending indices: ");
    scanf("%d %d",&start_index, &end_index);
    conversion(arr, str, &start_index, &end_index);
    printf("The Extracted String: ");
    printf("%s",str);
    return 0;
}