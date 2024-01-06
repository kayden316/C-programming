#include<stdio.h>
#define MAX 100
int main()
{
    int a [MAX];
    int n, i, sum=0;
    float avg;
    printf("Enter how many number (max 100):");
    scanf("%d", &n);
    for (i=0; i<n; i++);
    {
        printf("Enter numbers to an array:");
        scanf("%d", &a[i]);
        sum+= a[i];
    }
    avg= (float)sum/n;
    printf("The sum is %d", sum);
    printf("The average is %F", avg);
    return 0;
    }

