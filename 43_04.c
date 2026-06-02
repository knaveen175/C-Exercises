/*
Assignment : 43
Topic : Pointers
04||       Write a function to move first value of array to the position where all smaller values be in the left and greater values will be in right.

*/
#include<stdio.h>
void move(int *p, int *q)
{
    int i, j, x = 0, k = p[0];
    for ( i = 1 ; i < *q ; i++)
        if ( p[i] > k)
            for ( j = i ; j < *q ; j++)
                if ( p[j] < k)
                {
                    x = p[j];
                    p[j] = p[i];
                    p[i] = x;
                }

    for ( i = 1, j = 0 ; i < *q ; i++)
    {
        if ( p[i] < k)
        {
            x = p[i];
            p[i] = p[j];
            p[j] = x;
        }
        j++;
    }
}
int main()
{
    int a[100], n, i;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    printf("Enter %d Numbers: ",n);
    for (i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);
    move(a, &n);
    printf("New Array => ");
    for ( i = 0 ; i < n ; i++)
        printf("%d ",a[i]);
    return 0;
}