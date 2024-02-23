/*Pointers - Variable ka adress store karta hai*/ 
// #include <stdio.h>
// int main(){
//     int a = 5; // detatype
//     int* x= &a; // int* ka matlab pointer
//     printf("%p \n",&a); // %p se address print hota hai
//     printf("%p\n",&x);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a = 25;
//     int* x= &a; 
//     printf("%d\n",*x);
//     return 0;
// }
/*Important points*/
/*
printf("%p",x); - address of a
printf("%p",&x;) - address of x
printf("%d",*x); - 25
*/ 

#include <stdio.h>
int main(){
    int a = 25;
    int* x= &a; 
    *x = 7; // a is changed
    printf("%d\n",a);
    return 0;
}