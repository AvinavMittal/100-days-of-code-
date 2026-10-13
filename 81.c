#include <stdio.h>

int main()
{
    char str[] = "Hello";
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}