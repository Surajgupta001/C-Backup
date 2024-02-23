// WAP to find Average of the ten number.

#include <stdio.h>
int main(){
    int arr[10];
    int count = 10;
    int sum = 0;
    float average = 0.0;
    printf("Enter the 10 numbers: \n");
    int i;
    for(int i=0;i<=10;i++){
        printf("%d= ",i+1);
        scanf("%d",arr[i]);
        sum+=arr[i];
    }
    printf("\n Number of the ten numbers entered is: %d\n",sum);
    average = (float)sum/count;
    printf("\nAverage of the ten numbers entered is: %f\n", average);
    return 0;
}