// Write a program in C to find the sum of all elements of the array.
#include <stdio.h>
int main()
{
    int arr[100];
    int n, sum = 0;
    printf("Enter the element : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}