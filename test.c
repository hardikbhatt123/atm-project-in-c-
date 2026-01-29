#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    
    printf("Enter elements of 3x3 array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Odd elements in the array are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
