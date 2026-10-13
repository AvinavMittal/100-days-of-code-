#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 2, 4};
    int n = 4;
    int i, j, next;

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}