/*1st method using 3rd variable*/
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    return 0;
}

/*2nd method without using 3rd variable*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a is %d \n", a);
    printf("The value of a is %d \n", b);
    return 0;
}

/*3rd method using function*/ 
#include <stdio.h>
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    return ;
}
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    swap(a,b);
    printf("The value of a is %d \n", a);
    printf("The value of a is %d \n", b);
    return 0;
}