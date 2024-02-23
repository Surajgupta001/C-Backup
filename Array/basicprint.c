// 1.Write a program in C to store elements in an array and print them.
#include <stdio.h>
int main(){
    int arr[10];
    int i;
    printf("Enter tha input 10 number: \n");
    for(i=0;i<10;i++)
    {
        printf("element - %d",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Element in array are : ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}