#include <stdio.h>
int main(){
    int original[7]={1,2,3,4,5,6,7,};
    int copy[7];
    for(int i=0;i<=6;i++){
        copy[i]=original[6-i];
    }
    for(int i=0;i<=6;i++){
        printf("%d ",copy[i]);
    }
    return 0;
}

/*Write a program to reverse the array without using any extra array(Using swapping)*/
/*USING FUNCTION*/ 
#include <stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        // arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<=6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
} 