#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I love programming";
    char *word;
    char *longest;

    word = strtok(str, " ");
    longest = word;

    while(word != NULL)
    {
        if(strlen(word) > strlen(longest))
        {
            longest = word;
        }

        word = strtok(NULL, " ");
    }

    printf("%s", longest);

    return 0;
}