// Using function & for loop.
#include <stdio.h>
void gretting(int n){
    for(int i=1;i<=n;i++){
        printf("gretting \n");
    }
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    gretting(n);
    return 0;
}

// Using recursion
#include <stdio.h>
void gretting(int n){
    if(n==0) return;
    printf("gretting");
    gretting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    gretting(n);
    return 0;
}