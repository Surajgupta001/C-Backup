// Wap to print 1 to n using recursion. --> After recursive call.
#include <stdio.h>
void increasing(int n){
    if(n==0) return; // Base case
    // printf("%d\n",n); // code 
    increasing(n-1); // call
    printf("%d\n",n); // code 
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}