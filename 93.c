#include <stdio.h>

int main()
{
    char a[] = "listen";
    char b[] = "silent";
    int i, j, count = 0;

    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = 0; b[j] != '\0'; j++)
        {
            if(a[i] == b[j])
            {
                b[j] = '0';
                count++;
                break;
            }
        }
    }

    if(count == 6)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}