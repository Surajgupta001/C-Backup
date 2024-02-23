// Using function
#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}

// Using recursion
#include <stdio.h>
int factorial(int n){
    if (n==1) return 1; // Base case
   return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}