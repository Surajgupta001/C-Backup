// Using loop(1st method)
#include <stdio.h>
void sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("%d",sum);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

// Not using loop(Recursively)(2nd method)
#include <stdio.h>
void sum(int n , int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}

//Return type(not use void)(3rd method)(like factorial)
#include <stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int result = n + sum(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("%d",fact);
    return 0;
}

