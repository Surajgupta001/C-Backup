#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
     int c;
    printf("Enter the number of column: ");
    scanf("%d",&c);
    printf("Enter all the element: \n");
    int arr[r][c];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
    }
    int brr[c][r];
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // printf("%d ",arr[j][i]);
            brr[i][j]=arr[j][i];
        }
    }
    // printing brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}