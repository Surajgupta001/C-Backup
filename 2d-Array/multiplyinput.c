#include <stdio.h>
int main(){
    // 1st matrix order
    int m;
    printf("Enter no of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter no of column of 1st matrix : ");
    scanf("%d",&n);
    int arr[m][n];
    // input the first matrix
    printf("\nEnter element of 1st matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 2nd matrix order
    int p;
    printf("Enter no of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter no of column of 2nd matrix : ");
    scanf("%d",&q);
    int brr[p][q];
    // input the second matrix
    printf("\nEnter element of 1st matrix: ");
    for(int i=0;i<p;i++){
        for(int j=0;i<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    // check
    if(n!=p){
        printf("The matrices caanot be multiplied");
    }
    else{
        // multiplication
        int resultant[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                resultant[i][j]=0;
                // i row of a , j column of b
                for(int k=0;k<n;k++){
                    resultant[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        // print this matrix
        printf("The resultant matrix is : \n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",resultant[i][j]);
        }
        printf("\n");
    }
}
return 0;
}