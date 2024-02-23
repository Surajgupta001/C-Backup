// To merge 2 arrays in C language we will use the following approaches:

// Using Quaint Methodology
// Using Functions
// Input:

// arr1 = [1, 2, 3, 4, 5]
// arr2 = [6, 7, 8, 9, 10]

// 1.Using Quaint Methodology
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int result[10];
    printf("Enter the size io first array: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the size io second array: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    n3 = n1 + n2;
    for (int i = 0; i < n1; i++)
        result[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        result[i + n1] = arr2[i];
    printf("The merged array: ");
    for (int i = 0; i < n3; i++)
        printf("%d ", result[i]);
        printf("\nFinal array after sorting: ");
    for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(result[i] > result[j]) {
                temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }   
    for(int i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",result[i]);
    return 0;   
}