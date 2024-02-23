// Normal sum of 2 numbers.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the 1st numbers: \n");
    scanf("%d", &a);
    printf("Enter the 2nd number :\n");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum of 2 number is :%d", sum);
    return 0;
}

// With function sum of 2 numbers.
#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int a;
    printf("Enter the 1st numbers: \n");
    scanf("%d", &a);
    int b;
    printf("Enter the 2nd number :\n");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("sum of 2 number is :%d", sum);
    return 0;
}