#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, flag = 1;

    for(i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}