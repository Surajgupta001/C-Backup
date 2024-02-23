#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<=5;i++)
    scanf("%d",&arr[i]);
    printf("Odd numbers in array are: \n");
    for(int i=0;i<=5;i++){
        if(arr[i]%2!=0){
            printf("%d",arr[i]);
        }
    }
    return 0;
}



#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 5 number : \n");
    for(int i=0;i<10;i++){
        scanf("%d",arr[i]);
    }
    printf("Even Number in array are: \n");
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("Odd Number in array are: \n");
    for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}