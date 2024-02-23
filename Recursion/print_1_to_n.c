// Wap to print 1 to n using recursion. --> parameter.
#include <stdio.h>
void increasing(int x, int n){
    if(n==0) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}