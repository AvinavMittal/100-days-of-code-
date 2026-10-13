#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = 9;
    int k = 3;
    int i, j, max;

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i; j < i + k; j++)
        {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    return 0;
}