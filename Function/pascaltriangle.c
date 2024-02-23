// #include <stdio.h>
int factorial(int x)
{
  int fact = 1;
  for (int i = 2; i <= x; i++)
  {
    fact = fact * i;
  }
  return fact;
}
int combination(int n, int r)
{
  int ncr;
  ncr = factorial(n) / (factorial(r) * factorial(n - r));
  return ncr;
}
int main()
{
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      int icj = combination(i, j);
      printf("%d ", icj);
    }
    printf("\n");
  }
  return 0;
}

// 2nd method without using function.

// C program to print the pascal's triangle pattern
#include <stdio.h>
int main()
{
  int rows = 5;

  // outer loop for rows
  for (int i = 1; i <= rows; i++)
  {

    // inner loop 1 for leading white spaces
    for (int j = 0; j < rows - i; j++)
    {
      printf(" ");
    }

    int C = 1; // coefficient

    // inner loop 2 for printing numbers
    for (int k = 1; k <= i; k++)
    {
      printf("%d ", C);
      C = C * (i - k) / k;
    }
    printf("\n");
  }
  return 0;
}
