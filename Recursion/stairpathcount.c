// 1st ways
#include <stdio.h>
int stairs(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int totalways = stairs(n-1) + stairs(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}


// 2nd ways
#include <stdio.h>
int stairs(int n){
    if(n==1 || n==2) return n;
    int totalways = stairs(n-1) + stairs(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}


// 3rd ways
#include <stdio.h>
int stairs(int n){
    if(n<=2) return n;
    int totalways = stairs(n-1) + stairs(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}


// 4th stairs
#include <stdio.h>
int stairs(int n){
    if(n==1 || n==2 || n==3) return n;
    int totalways = stairs(n-1) + stairs(n-2) + stairs(n-3);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}

