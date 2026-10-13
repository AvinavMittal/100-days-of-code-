#include <stdio.h>

int main()
{
    int nums[] = {3, 2, 3};
    int n = 3;
    int i, j, count;
    int majority = -1;

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }

        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}