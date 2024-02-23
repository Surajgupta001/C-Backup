/*Basic Syntax
fun(){
    // code
}
*/

#include <stdio.h>
void suraj(){
    printf("Good morning \n");
    printf("How old are you \n");
}
int main(){
    suraj ();
    return 0;
}

#include <stdio.h>
void england(){
    printf("You are in england \n");
    return;
}
void Australia(){
    printf("You are in Austalia \n");
    england();
    return;
}
void india(){
    printf("You are in india \n");
    Australia();
    return;
}
int main(){
    india();
    return 0;
}