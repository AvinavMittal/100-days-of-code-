#include <stdio.h>

int main()
{
    char str[] = "Hi";
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}