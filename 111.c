#include <stdio.h>

int main()
{
    int arr[] = {-8, 2, 3, -6, 10};
    int n = 5;
    int k = 2;
    int i, j, negative;

    for(i = 0; i <= n - k; i++)
    {
        negative = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                negative = arr[j];
                break;
            }
        }

        printf("%d ", negative);
    }

    return 0;
}