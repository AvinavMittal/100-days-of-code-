#include <stdio.h>

int main()
{
    char str[] = "a b1&2";
    int i, space = 0, digit = 0, special = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            space++;

        else if(str[i] >= '0' && str[i] <= '9')
            digit++;

        else if(str[i] < 'a' || str[i] > 'z')
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           space, digit, special);

    return 0;
}