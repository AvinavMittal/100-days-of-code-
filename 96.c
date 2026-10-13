#include <stdio.h>

int main()
{
    char str[] = "I love coding";
    int i, j, start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            for(j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            if(str[i] == '\0')
                break;

            printf(" ");
            start = i + 1;
        }
    }

    return 0;
}