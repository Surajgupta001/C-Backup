#include <stdio.h>
int main()
{
    int n, t;
    int a[5]={45,98,100,56,89};
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            if (a[i] < a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}