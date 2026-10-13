#include <stdio.h>

int main()
{
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int sum[2];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        sum[i] = 0;

        for(j = 0; j < 3; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(i = 0; i < 2; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}