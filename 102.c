#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int x = 5;
    int index = -1;
    int i;

    for(i = 0; i < 7; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}