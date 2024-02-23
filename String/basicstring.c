#include <stdio.h>
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("%c", arr[3]);
    return 0;
}

#include <stdio.h>
int main()
{
    char arr[] = "Suraj Kumar Gupta \0"; // \0 -> null character,but considered to be a single character.
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }
    return 0;
}