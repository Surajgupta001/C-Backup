// 1.) Write a program in C to show the simple structure of a function.
#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int sum = add(a,b);
    printf("sum of 2 number is %d",sum);
    return 0;
}

// 2.) Write a program in C to find the square of any number using the function.
#include <stdio.h>
    double square(double num)
    {
        return (num*num);
    }
    int main (){
        int num;
        double n;
        printf("Enter any number: ");
        scanf("%d",&num);
        n = square(num);
        printf("Square of number is %f",num,n);
        return 0;
    }

// 3.) Write a program in C to swap two numbers using a function.
#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a=2;
    int b=9;
    swap(&a,&b);
    printf("The value of a is %d \n", a);
    printf("The value of a is %d \n", b);
    return 0;
}

// 4.) Write a program in C to check if a given number is even or odd using the function.
#include <stdio.h>
int checkoddeven(int n1)
{
    return (n1 & 1);
}
int main(){
    int n1;
    printf("Enter any number : ");
    scanf("%d",&n1);
    if(checkoddeven(n1))
    {
        printf("Entered number is odd");
    }
    else
    {
        printf("Entered number is even");
    }
    return 0;
}

// 5.) Write a program in C to get the largest element of an array using the function.
