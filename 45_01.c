/*
Assignment : 45
Topic : Structure
01||       Write a program to calculate difference between two time periods.

*/
#include<stdio.h>
struct Time
{
    int hour, minute, second;
}t1, t2;
struct Time difference()
{
    struct Time x;
    if (t1.second < t2.second)
    {
        t1.minute--;
        t1.second += 60;
    }
    x.second = t1.second - t2.second;
    if (t1.minute < t2.minute)
    {
        t1.hour--;
        t1.minute += 60;
    }
    x.minute = t1.minute - t2.minute;
    if (t1.hour < t2.hour)
        x.hour = t2.hour - t1.hour;
    else
        x.hour = t1.hour - t2.hour;
    return x;
}
int main()
{
    struct Time t;
    printf("Enter time(hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
    printf("Enter another time(hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);
    t = difference();
    printf("Difference = %d Hrs %d Min %d Sec", t.hour, t.minute, t.second);
    return 0;
}