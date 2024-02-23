// 1st way.
#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    int ans = ans1 + ans2;
    return ans; 
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",fibo(n));
    return 0;
}

// 2nd way.
#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",fibo(n));
    return 0;
}


// 3rd way.
#include <stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",fibo(n));
    return 0;
}