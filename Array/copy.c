// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main()
{
    int i, n;
    int arr1[100], arr2[100];
    printf("Enter the element :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d = ", i);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("% d", arr2[i]);
    }
    printf("\n\n");
    return 0;
}
