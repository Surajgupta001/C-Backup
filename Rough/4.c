#include <stdio.h>
int addWithoutPlus(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = addWithoutPlus(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}