#include <stdio.h>

int main()
{
    int nums[] = {1, 7, 3, 6, 5, 6};
    int i, j;
    int left, right;
    int pivot = -1;

    for(i = 0; i < 6; i++)
    {
        left = 0;
        right = 0;

        for(j = 0; j < i; j++)
            left = left + nums[j];

        for(j = i + 1; j < 6; j++)
            right = right + nums[j];

        if(left == right)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}