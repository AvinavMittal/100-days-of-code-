#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "abcde";
    char b[] = "deabc";
    char temp[20];

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}