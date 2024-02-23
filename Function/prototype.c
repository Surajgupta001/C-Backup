// #include <stdio.h>
void fun(){
    printf("Hellow");
}
int main(){
    fun();
    return 0;
}

/*Function prototype*/ 
#include <stdio.h>
int main(){
    void fun(); // Function prototype
    fun();
    return 0;
}
void fun(){
    printf("Hellow");
    return;
}