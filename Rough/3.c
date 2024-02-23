// C Program to Sort the Elements of an Array in Descending Order.
#include <stdio.h>
int main(){
    int arr[5]={45,98,100,56,89};
    int n=5,temp;
    for(int i=0;i<n;i++){
        for(int j=j+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// #include <stdio.h>
// void main()
// {
//     int n, t;
//     printf("How many numbers you want to enter: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter number upto %d\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (a[i] > a[j + 1])
//             {
//                 t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", a[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// void main (){
//     int num[20];
//     int i, j, a, n;
//     printf("Enter number of elements in an array: \n");
//     scanf("%d", &n);
//     printf("Enter the elements\n");
//     for (i = 0; i < n; i++)
//         scanf("%d\n", &num[i]);
//     for (i = 0; i < n; i++){
//         for (j = i + 1; j < n; j++){
//             if (num[i] < num[j]){
//                 a = num[i];
//                 num[i] = num[j];
//                 num[j] = a;
//             }
//         }
//     }
//     printf("The numbers in descending order is:\n");
//     for (i = 0; i < n; ++i){
//         printf("%d\n", num[i]);
//     }
// }