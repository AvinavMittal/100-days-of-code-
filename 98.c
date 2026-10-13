#include <stdio.h>

int main()
{
    char name[] = "John David Doe";
    int i;

    printf("%c.", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            if(name[i + 1] == 'D' && name[i + 2] == 'o')
                printf(" Doe");
            else
                printf("%c.", name[i + 1]);
        }
    }

    return 0;
}