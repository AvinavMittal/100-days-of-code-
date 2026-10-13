#include <stdio.h>

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int first = -1, last = -1;
    int i;

    for(i = 0; i < 6; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}