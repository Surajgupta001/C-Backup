#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows/column: ");
    scanf("%d", &n);
    printf("Enter all the elements: ");
    int arr[n][n];
    // Input
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            scanf("%d",arr[i][j]);
        }
    }
    // Transpose
    for (int i=0;i<n;i++){
        for (int j=1;j<n;j++)
        {
            // swap arr[i][j] and arr[j][i]
            int temp;
            temp = arr[i][i];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n");
    // Output
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // Rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=0;
        while(j<k){
            // swap arr[i][j] and arr[j][k]
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    // Output 
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}