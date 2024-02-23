#include <stdio.h>
int main(){
    int arr[50];
    int n,large;
    printf("Enter how many numbers : \n");
    scanf("%d",&n);
    printf("Enter the values for the array: \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    large = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large)
        large = arr[i];
    }
    printf("The largest element stored in array a is %d",large);
    return 0;
}