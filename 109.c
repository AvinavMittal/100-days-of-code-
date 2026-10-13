#include <stdio.h>

int main()
{
    int arr[] = {100, 200, 300, 400};
    int n = 4;
    int k = 2;
    int i, j, sum;
    int max = 0;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}