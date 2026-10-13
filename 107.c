#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 2, 4};
    int n = 4;
    int i, j, previous;

    for(i = 0; i < n; i++)
    {
        previous = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}