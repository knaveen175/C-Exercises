/*
Assignment : 32
Topic : Arrays and Functions
04||       Write a function to count the frequency of each element of an array.

*/
#include<stdio.h>
void frequency(int a[], int n)
{
    int i, j, temp, count;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i-1]) 
        {
            count = 1;
            for (j = i + 1; j < n; j++)
            {
                if (a[j] == a[i])
                    count++;
                else
                    break;
            }
            printf("Frequency of %d = %d\n", a[i], count);
        }
    }
}

int main()
{
    int a[100], n, i;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    frequency(a, n);
    return 0;
}
