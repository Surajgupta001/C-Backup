// 1. Write a program in C to read n number of values in an array and display them in reverse order.
#include <stdio.h>
int main()
{
    int n, arr[10];
    printf("Input the number of element stored in array: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The value stored into the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("The values store into the array in reverse are :\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    return 0;
}