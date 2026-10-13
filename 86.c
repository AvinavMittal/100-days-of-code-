#include <stdio.h>

int main()
{
    char str[] = "abcd";
    int i;

    for(i = 3; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}