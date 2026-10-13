#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3, 4};
    int n = 4;
    int i, j, product;

    printf("[");

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
                product = product * nums[j];
        }

        printf("%d", product);

        if(i < n - 1)
            printf(",");
    }

    printf("]");

    return 0;
}